#include <iostream>
#include <vector>
#include <climits>

using namespace std;
using pii = pair<int,int>;

const int MAXN = 1e2+1;
const int INF = INT_MAX/2;

int mD3[MAXN][MAXN][MAXN];

int main() {
    freopen("entrada.txt", "r", stdin);
    freopen("saida.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n = 0, m = 0;
    int x = 0, y = 0, w = 0;
    
    while(cin >> n >> m && n) {
        for(int k = 0; k <= n; k++) {
        for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            if(i != j) mD3[i][j][k] = INF;
        }}}
        
        for(int i = 0; i < m; i++) {
            cin >> x >> y >> w;
            mD3[x][y][0] = w;
            mD3[y][x][0] = w;
        }
        
        for(int k = 1; k <= n; k++) {
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= n; j++) {
                    mD3[i][j][k] =  min(mD3[i][k][k-1] + mD3[k][j][k-1], mD3[i][j][k-1]);
                }
            }
        }
        
        cin >> m;
        
        for(int i = 0; i < m; i++) {
            cin >> x >> y >> w;
            if(mD3[x][y][w] == INF) cout << "-1" << endl;
            else cout << mD3[x][y][w] << endl;
        }
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}