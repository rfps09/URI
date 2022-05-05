#include <iostream>
#include <cstring>

using namespace std;

const int MAXV = 1e5+10;
const int MAXM = 1e3+10;

int memo[MAXM][MAXV];
int vetor[MAXM];

int solve(int item, int value, int &ans) {
    if(ans == 1) return ans;
    if(item == 0 || value == 0) return value == 0;

    ans = 0;

    if(vetor[item-1] <= value) {
        ans = max(ans,solve(item-1, value-vetor[item-1], ans));
    }

    ans = max(ans,solve(item-1, value,ans));

    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int v=0, m=0, ans=0;

    cin >> v >> m;

    for(int i=0; i<m; i++) 
        cin >> vetor[i];

    if(solve(m,v,ans)) cout << "S\n";
    else cout << "N\n";

    return 0;
}