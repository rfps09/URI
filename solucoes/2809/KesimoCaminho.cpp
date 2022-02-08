#include <iostream>
#include <vector>
#include <set>

using namespace std;

using pii = pair<int,int>;
const int MAXN = 1e4+1;

int n,m,q;
int u,v;
int k,d,w;
int custo;
vector<pii> grafinho[MAXN];
set<pii> caminhos;
set<pii> mc;
int visitados[MAXN];

void dfs(int x, int cost,int diff) {
    visitados[x] = 1;

    for(int i = 0; i < grafinho[x].size(); i++) {
        pii y = grafinho[x][i];
        
        int no = y.first;
        int costo = cost+y.second;
        int JgDiff = diff;

        if(mc.find(pii(x,no)) == mc.end()) JgDiff++;

        if(no == v) caminhos.insert(pii(JgDiff,costo));
        else if(!visitados[no])
        dfs(no,costo, JgDiff);
    }
    
    visitados[x] = 0;
}

int main() {
    freopen("entrada.txt", "r", stdin);
    freopen("saida.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    cin >> n >> m >> q;
    cin >> u >> v;

    cin >> d;
    k = d;
    while(d != v && cin >> d) {
        mc.insert(pii(k,d));
        k = d;
    }
    
    for(int i = 0; i < m; i++) {
        cin >> k >> d >> w;
        grafinho[k].push_back(pii(d,w));
        if(mc.find(pii(k,d)) != mc.end()) custo-=w;
    }

    dfs(u,custo,0);

    for(int i = 0; i < q; i++) {
        cin >> k >> d;
        if(caminhos.find(pii(k,d)) != caminhos.end()) 
             cout << "SIM" << endl;
        else cout << "NAO" << endl;
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}