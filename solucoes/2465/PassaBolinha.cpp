#include <iostream>

using namespace std;

const int MAXN = 110;

int n;
int grafinho[MAXN][MAXN];
int visit[MAXN][MAXN];

int dfs(int x, int y, int &ans) {
    visit[x][y] = 1;
    int value = grafinho[x][y];
    if(grafinho[x+1][y] >= value && !visit[x+1][y]) {
        ans++;
        dfs(x+1,y,ans);
    }
    if(grafinho[x][y+1] >= value && !visit[x][y+1]) {
        ans++;
        dfs(x,y+1,ans);
    }
    if(grafinho[x-1][y] >= value && !visit[x-1][y]) {
        ans++;
        dfs(x-1,y,ans);
    }
    if(grafinho[x][y-1] >= value && !visit[x][y-1]) {
        ans++;
        dfs(x,y-1,ans);
    }
    
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int x=0,y=0;
    
    cin >> n;
    cin >> x >> y;
    
    for(int i=1; i<=n; i++) 
    for(int j=1; j<=n; j++) 
        cin >> grafinho[i][j];
        
    int ans = 1;
    dfs(x,y,ans);
    
    cout << ans << "\n";

    return 0;
}