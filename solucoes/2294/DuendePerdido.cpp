#include <iostream>
#include <queue>
#include <cstring>

using namespace std;
using pii = pair<int,int>;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n=0,m=0;
    int x=0,y=0;
    int ans=0;
    
    cin >> n >> m;
    
    int grafinho[n+2][m+2];
    int visited[n+2][m+2];
    
    for(int i=0; i<n+2; i++) {
        grafinho[i][0] = 2;
        grafinho[i][m+1] = 2;
    }
    
    for(int i=0; i<m+2; i++) {
        grafinho[0][i] = 2;
        grafinho[n+1][i] = 2;
    }
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin >> grafinho[i][j];
            if(grafinho[i][j] == 3) {
                x=i;
                y=j;
            }
        }
    }
    
    memset(visited,0,sizeof(visited));
    
    queue<pii> fila;
    fila.push(pii(x,y));
    grafinho[x][y] = 2;
    visited[x][y] = 0;
    
    while(!fila.empty()) {
        pii atual = fila.front();
        x = atual.first;
        y = atual.second;
        
        if(grafinho[x][y] == 0) {
            ans = visited[x][y];
            break;
        }
        
        if(grafinho[x+1][y] < 2 && !visited[x+1][y]) {
            fila.push(pii(x+1,y));
            visited[x+1][y] = visited[x][y] + 1;
        }
        if(grafinho[x][y+1] < 2 && !visited[x][y+1]) {
            fila.push(pii(x,y+1));
            visited[x][y+1] = visited[x][y] + 1;
        }
        if(grafinho[x-1][y] < 2 && !visited[x-1][y]) {
            fila.push(pii(x-1,y));
            visited[x-1][y] = visited[x][y] + 1;
        }
        if(grafinho[x][y-1] < 2 && !visited[x][y-1]) {
            fila.push(pii(x,y-1));
            visited[x][y-1] = visited[x][y] + 1;
        }
        
        fila.pop();
    }
    
    cout << ans << "\n";
    
    return 0;
}