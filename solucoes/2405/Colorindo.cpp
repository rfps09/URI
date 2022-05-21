#include <iostream>
#include <queue>
#include <cstring>
    
using namespace std;
using pii = pair<int,int>;
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n,m,x,y,k;
    int a,b;
    
    cin >> n >> m >> x >> y >> k;
    
    int grafinho[n+2][m+2];
    
    memset(grafinho,1,sizeof(grafinho));
    
    for(int i=0; i<n+2; i++) {
        grafinho[i][0] = 0;
        grafinho[i][m+1] = 0;
    }
    
    for(int i=0; i<m+2; i++) {
        grafinho[0][i] = 0;
        grafinho[n+1][i] = 0;
    }
    
    for(int i=0; i<k; i++) {
        cin >> a >> b;
        grafinho[a][b] = 0;
    }

    queue<pii> fila;
    int count = 1;
    
    fila.push({x,y});
    grafinho[x][y] = 0;
    
    while(!fila.empty()) {
        pii xy = fila.front();
        x = xy.first;
        y = xy.second;
    
        if(grafinho[x+1][y]) {
            fila.push({x+1,y});
            count++;
            grafinho[x+1][y] = 0;
        }
        if(grafinho[x+1][y+1]) {
            fila.push({x+1,y+1});
            count++;
            grafinho[x+1][y+1] = 0;
        }
        if(grafinho[x][y+1]) {
            fila.push({x,y+1});
            count++;
            grafinho[x][y+1] = 0;
        }
        if(grafinho[x-1][y+1]) {
            fila.push({x-1,y+1});
            count++;
            grafinho[x-1][y+1] = 0;
        }
        if(grafinho[x-1][y]) {
            fila.push({x-1,y});
            count++;
            grafinho[x-1][y] = 0;
        }
        if(grafinho[x-1][y-1]) {
            fila.push({x-1,y-1});
            count++;
            grafinho[x-1][y-1] = 0;
        }
        if(grafinho[x][y-1]) {
            fila.push({x,y-1});
            count++;
            grafinho[x][y-1] = 0;
        }
        if(grafinho[x+1][y-1]) {
            fila.push({x+1,y-1});
            count++;
            grafinho[x+1][y-1] = 0;
        }
    
        fila.pop();
    }
    
    cout << count << "\n";
    
    return 0;
}