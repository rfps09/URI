#include <iostream>
#include <vector>

using namespace std;
using pii = pair<int,int>;
using pip = pair<int,pii>;

const int MAXN = 10e4+1;

int n,m,count;
vector<pii> grafinho[MAXN];
pip media[MAXN];
int processado[MAXN];

void dfs(int x) {
  processado[x] = count;
  for(int i = 0; i < grafinho[x].size(); i++) {
    int y = grafinho[x][i].first;
    if(!processado[y]) dfs(y);
  }
}

int main() {
  ios::sync_with_stdio(0);
  int ans = 0, index = 1;
  int aresta = 0;
  double avg = 0;
  int x = 0, y = 0, z = 0;
  cin >> n >> m;

  for(int i = 0; i < m; i++) {
    cin >> x >> y >> z;
    grafinho[x].push_back(pii(y,z));
    grafinho[y].push_back(pii(x,z));
  }

  for(int i = 1; i <= n; i++) {
    if(!processado[i]) {
      count++;
      dfs(i);
    }
  }

  for(int i = 1; i <= n; i++) {
    media[processado[i]].first = i;
    for(int j = 0; j < (int)grafinho[i].size(); j++) {
      int k = grafinho[i][j].second;
      media[processado[i]].second.first += k;
    }

    media[processado[i]].second.second += (int)grafinho[i].size();
    if(media[processado[i]].second.second == 0)
      media[processado[i]].second.second++;
  }

  avg = (double)media[1].second.first / media[1].second.second;
  aresta = media[1].first;
  for(int i = 2; i <= count; i++) {
    double maybe = (double)media[i].second.first / media[i].second.second;
    int no = media[i].first;
    if(maybe < avg || (maybe == avg && aresta < no)) {
      index = i;
      avg = maybe;
      aresta = no;
    }
  }

  for(int i = 1; i <= n; i++) {
    if(index == processado[i]) ans = i;
  }

  cout << ans << endl;

  return 0;
}
