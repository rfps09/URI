#include <iostream>
#include <cstring>

using namespace std;

int adj[110][110];
int n,m, inf = 1<<30;
bool foi[110], mark[110];
int cap[110];

int corte() {
    int ret, S, T;
    memcpy(mark,foi,sizeof foi);
    for(int i=0; i < n; i++) if( !foi[i] ) {
        for(int j=0; j<n; j++) cap[j] = adj[i][j];
        mark[i] = true;
        S = i;
        break;
    }
    while(true) {
        int x, y = 0;
        for(int i=0; i<n; i++) if( !mark[i] && cap[i] > y ) x = i,y = cap[i];
        if( !y ) break;
        ret = y;
        T = S;
        S = x;
        mark[S] = true;
        for(int i=0; i<n; i++) if( !mark[i] && adj[S][i] ) {
            cap[i] += adj[S][i];
        }
    }
    foi[S] = true;
    for(int i=0; i<n; i++) {
        adj[i][T] += adj[i][S];
        adj[T][i] += adj[S][i];
    }
    return ret;
}
bool read() {
    scanf("%d%d", &n, &m);
    memset(foi,false,sizeof foi);
    memset(adj,0,sizeof adj);
    for(int i=0; i<m; i++) {
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c); a--,b--;
        adj[a][b] = adj[b][a] = c;
    }
    int res = inf;
    for(int k=1; k<n; k++) {
        res = min(res, corte());
    }
    printf("%d\n",res);
    return true;
}

int main() {
    int qtdTeste;
    cin >> qtdTeste;
    for(int i = 0; i < qtdTeste; i++)
        read();

    return 0;
}
