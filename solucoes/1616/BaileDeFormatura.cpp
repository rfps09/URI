#include <iostream>

using namespace std;
using ll = long long int;

const int MAXBG = 1e3+1;
const int mod = 1e9+7;

int dp[MAXBG][MAXBG];

int solve(int b, ll g) {
    if(!b || !g) return (b == 0 && g == 0);
    
    if(dp[b][g] != -1) return dp[b][g];
    
    int ans = (solve(b-1,g) * g)%mod;
    ans += (solve(b-1,g-1) * g)%mod;
    
    return dp[b][g] = ans%mod;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int b=0,g=0;
    
    while(cin >> b >> g && b) {
        for(int i=0; i<=b; i++) 
            for(int j=0; j<=g; j++) 
                dp[i][j] = -1;
    
        cout << solve(b,g) << "\n";
    }
    
    return 0;
}