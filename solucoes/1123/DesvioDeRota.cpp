#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

using pii = pair<int,int>;

const int MAXN = 250;
const int INF = INT_MAX;

int n, m, c, k;
int u, v, p;
vector<pii> grafinho[MAXN];
int distancia[MAXN];
int processado[MAXN];

void dijkstra(int x) {
  for(int i = 0; i < n; i++) {
    distancia[i] = INF;
    processado[i] = 0;
  }
  distancia[x] = 0;
  priority_queue<pii, vector<pii>, greater<pii>> fila;
  fila.push(pii(distancia[x],x));

  while(true) {
    int youTurn = -1;

    while(!fila.empty()) {
      int atual = fila.top().second;
      fila.pop();

      if(!processado[atual]){
        youTurn = atual;
        break;
      }
    }

    if(youTurn == -1 || youTurn == c-1) break;

    processado[youTurn] = true;

    if(youTurn < c-1) {
      for(int i = 0; i < grafinho[youTurn].size(); i++) {
        int no = grafinho[youTurn][i].first;
        int dist = grafinho[youTurn][i].second;

        if(no == youTurn+1 && distancia[no] > distancia[youTurn] + dist) {
          distancia[no] = distancia[youTurn] + dist;
          fila.push(pii(distancia[no], no));
        }
      }
    }
    else {
      for(int i = 0; i < grafinho[youTurn].size(); i++) {
        int no = grafinho[youTurn][i].first;
        int dist = grafinho[youTurn][i].second;

        if(distancia[no] > distancia[youTurn] + dist) {
          distancia[no] = distancia[youTurn] + dist;
          fila.push(pii(distancia[no], no));
        }
      }
    }  
  }
}

int main() {
  ios::sync_with_stdio(0);
  while(cin >> n >> m >> c >> k && n) {
    for(int i = 0; i < m; i++) {
      cin >> u >> v >> p;
      grafinho[u].push_back(pii(v,p));
      grafinho[v].push_back(pii(u,p));
    }

    dijkstra(k);

    cout << distancia[c-1] << endl;

    for(int i = 0; i < n; i++) {
      grafinho[i].clear();
    }
  }
  return 0;
}
