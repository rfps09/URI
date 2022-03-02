#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
using pii = pair<int,int>;

const int MAXN = 401;
const int INF = INT_MAX/2;

int n,r,q;
int x,y,d;
int a,b,k,t;
pii temps[MAXN];
int frio[MAXN][MAXN][MAXN];
int calor[MAXN][MAXN][MAXN];

int main() {
    freopen("entrada.txt", "r", stdin);
    freopen("saida.txt", "w", stdout);
    
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    cin >> n >> r;

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            for(int l = 0; l <= n; l++){
                if(i != j) {
                    frio[i][j][l] = INF;
                    calor[i][j][l] = INF;
                }
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cin >> temps[i].first;
        temps[i].second = i+1;
    }

    for(int i = 0; i < r; i++) {
        cin >> x >> y >> d;
    
        frio[x][y][0] = d;
        frio[y][x][0] = d;
        calor[x][y][0] = d;
        calor[y][x][0] = d;
    }

    sort(temps, temps+n);

    for(int z = 1; z <= n; z++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                frio[i][j][z] = min(frio[i][temps[z-1].second][z-1] + frio[temps[z-1].second][j][z-1], frio[i][j][z-1]);
            }
        }
    }

    sort(temps, temps+n, greater());

    for(int z = 1; z <= n; z++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                calor[i][j][z] = min(calor[i][temps[z-1].second][z-1] + calor[temps[z-1].second][j][z-1], calor[i][j][z-1]);
            }
        }
    }

    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> a >> b >> k >> t;

        if(t && calor[a][b][k] != INF)
            cout << calor[a][b][k] << endl;
        else if(!t && frio[a][b][k] != INF)
            cout << frio[a][b][k] << endl;
        else cout << "-1" << endl;
    }
    
    fclose(stdin);
    fclose(stdout);

    return 0;
}