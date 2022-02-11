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
int processado[MAXN];

void dfs(int x, int cost,int diff) {
    processado[x] = 1;
    if(x == v) caminhos.insert(pii(diff,cost));
    for(int i = 0; i < grafinho[x].size(); i++) {
        pii y = grafinho[x][i];
        
        int no = y.first;
        int costo = cost+y.second;
        int JgDiff = diff;

        if(mc.find(pii(x,no)) == mc.end()) JgDiff++;

        if(!processado[no] && JgDiff <= 100 && costo <= 1e4)
        dfs(no,costo, JgDiff);
    }
    processado[x] = 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    set<pii>::iterator it;
    
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
        for(it = caminhos.begin(); it != caminhos.end(); it++) {
            if(it-> first >= k && it->second <= d) {
                cout << "SIM" << endl;
                break;
            }
        }
        if(it == caminhos.end()) {
            cout << "NAO" << endl;
        }
    }

    return 0;
}