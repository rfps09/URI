#include <iostream>
#include <cstring>

using namespace std;

const int MAXC = 1001;
const int MAXF = 51;

int w[MAXC],v[MAXC];
int memo[MAXF][MAXC];

int solve(int f, int c) {
    if(f == 0 || c == 0) return 0;

    if(memo[f][c] != -1) return memo[f][c];

    int ans = solve(f-1,c);

    if(w[f-1] <= c) {
        ans = max(ans, solve(f-1,c-w[f-1]) + v[f-1]);
    }

    return memo[f][c] = ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int c=0,f=0,count=0;

    while(cin >> c >> f && c) {
        count++;

        memset(memo,-1,sizeof(memo));

        for(int i=0; i<f; i++)
            cin >> w[i] >> v[i];
        
        cout << "Teste " << count << "\n"; 
        cout << solve(f,c) << "\n\n";
    }

    return 0;
}