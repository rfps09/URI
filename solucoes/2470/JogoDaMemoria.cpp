#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int MAXN = 50010;
const int MAXLOG = 20;

int n;
vector<int> grafinho[MAXN];
int pai[MAXN][MAXLOG];
int nivel[MAXN];
int processado[MAXN];

void troca(int &x, int &y) {
    int aux = y;
    y = x;
    x = aux;
}

void dfs(int x) {
    processado[x] = 1;
    for(int i = 0; i < grafinho[x].size(); i++) {
        int y = grafinho[x][i];
        if(!processado[y]) {
            nivel[y] = nivel[x]+1;
            pai[y][0] = x;
            for(int j = 1; j < MAXLOG; j++) {
                pai[y][j] = pai[pai[y][j-1]][j-1];
            }
            dfs(y);
        }
    }
}

int lca(int x, int y) {
    if(nivel[y] > nivel[x]) troca(x,y);

    for(int i = MAXLOG-1; i >= 0; i--) {
        if(nivel[x] - (1<<i) >= nivel[y]) 
            x = pai[x][i];
    }

    if(x == y) return x;

    for(int i = MAXLOG-1; i >= 0; i--) {
        if(pai[x][i] != pai[y][i]) {
          x = pai[x][i];
          y = pai[y][i];
        }
    }

    return pai[x][0];
}

int main() {
    ios::sync_with_stdio(0);
    map<int,pair<int,int>> mymap;
    int x = 0, y = 0, z = 0, ans = 0;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> x;
        if(mymap.find(x) != mymap.end()) mymap[x].second = i;
        else mymap[x].first = i;
    }

    for(int i = 1; i < n; i++) {
        cin >> x >> y;
        grafinho[x].push_back(y);
        grafinho[y].push_back(x);
    }

    dfs(1);

    for(int i = 1; i <= n/2; i++) {
        x = mymap[i].first;
        y = mymap[i].second;
        z = lca(x,y);
        ans += nivel[x] + nivel[y] - (2* nivel[z]);
    }

    cout << ans << endl;

    return 0;
}
