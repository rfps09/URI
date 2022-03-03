#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <climits>
 
using namespace std;
 
const int MAXN = 401;
const int MAXQ = 1e5+1;
const int INF = INT_MAX/2;
 
struct c {
    int a,b,k,id;
    c(int a, int b, int k, int id) {
        this->a = a;
        this->b = b;
        this->k = k;
        this->id = id;
    }
};
 
int n,r;
int x,y,d;
int q;
int a,b,k,t;
int grafo[MAXN][MAXN];
int grafinho[MAXN][MAXN];
int ans[MAXQ];
map<int,vector<int>> mytemps;
vector<c> consultas[2];
vector<int> temps;
 
int comparer(c p, c o) {
    return p.k < o.k;
}

void floyd(int T) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            grafinho[i][j] = grafo[i][j];
        }
    }
 
    int count = 0;

    for(int l = 0; l < consultas[T].size(); l++) {
        c youTurn = consultas[T][l];
        vector<int> tt;
        
        for(int i = count; i < youTurn.k; i++) {
            if(i >= temps.size()) break;
            for(int j = 0; j < mytemps[temps[i]].size(); j++) {
                tt.push_back(mytemps[temps[i]][j]);
            }
        }
     
        for(int z = 0; z < tt.size(); z++) {
            int v = tt[z];
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= n; j++) {
                    grafinho[i][j] = min(grafinho[i][v]+grafinho[v][j], grafinho[i][j]);
                }
            }
        }
        
        count = youTurn.k;
        ans[youTurn.id] = grafinho[youTurn.a][youTurn.b] != INF ? grafinho[youTurn.a][youTurn.b] : -1;
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    cin >> n >> r;
 
    for(int i = 1; i <= n; i++) {
        cin >> t;
        mytemps[t].push_back(i);
    }
    
    for(auto& z : mytemps) {
        temps.push_back(z.first);
    }
 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            grafo[i][j] = i == j ? 0 : INF;
        }
    }
 
    for(int i = 0; i < r; i++) {
        cin >> x >> y >> d;
        grafo[x][y] = d;
        grafo[y][x] = d;
    }
 
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> a >> b >> k >> t;
        consultas[t].push_back(c(a,b,k,i));
    }
    
    sort(consultas[0].begin(), consultas[0].end(),comparer);
    floyd(0);
    
    sort(temps.begin(), temps.end(), greater<int>());
    sort(consultas[1].begin(), consultas[1].end(),comparer);
    floyd(1);
    
    for(int i = 0; i < q; i++) {
		cout << ans[i] << "\n";
    }
 
    return 0;
}