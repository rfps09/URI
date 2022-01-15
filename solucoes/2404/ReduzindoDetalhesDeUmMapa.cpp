#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using pii = pair<int,int>;
using pip = pair<int,pii>;

const int MAXN = 500+1;

int n,m;
vector<pip> grafinho;
int pai[MAXN];
int deep[MAXN];

int find(int x) {
  if(pai[x] == x) return x;
  return pai[x] = find(pai[x]);
}

void join(int a, int b) {
  a = find(a);
  b = find(b);

  if(deep[a] > deep[b]) pai[b] = a;
  else if(deep[a] < deep[b]) pai[a] = b;
  else {
    pai[a] = b;
    deep[b]++;
  }
}

int main() {
  ios::sync_with_stdio(0);
  int u = 0, v = 0, c = 0;
  int ans = 0, count = 0;

  cin >> n >> m;

  for(int i = 1; i <= n; i++)
    pai[i] = i;

  for(int i = 0; i < m; i++) {
    cin >> u >> v >> c;
    grafinho.push_back(pip(c,pii(u,v)));
  }

  sort(grafinho.begin(), grafinho.end());

  for(int i = 0; i < m; i++) {
    int x = grafinho[i].second.first;
    int y = grafinho[i].second.second;
    c = grafinho[i].first;
    if(find(x) != find(y)) {
      join(x, y);
      ans+=c;
    }
  }

  cout << ans << endl;

  return 0;
}
