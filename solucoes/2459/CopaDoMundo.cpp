#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using pii = pair<int,int>;
using pip = pair<int,pii>;

const int MAXN = 100+1;

int n,f,r;
vector<pip>ferrovia;
vector<pip>rodovia;
int pai[MAXN];
int deep[MAXN];

int find(int x) {
  if(pai[x] == x) return x;
  return pai[x] = find(pai[x]);
}

void join (int x, int y) {
  x = find(x);
  y = find(y);

  if(deep[x] > deep[y]) pai[y] = x;
  else if(deep[x] < deep[y]) pai[x] = y;
  else {
    pai[y] = x;
    deep[x]++;
  }
}

int main() {
  ios::sync_with_stdio(0);
  int a = 0, b = 0, c = 0;
  int ans = 0;

  cin >> n >> f >> r;

  for(int i = 1; i <= n; i++) pai[i] = i;

  for(int i = 0; i < f; i++) {
    cin >> a >> b >> c;
    ferrovia.push_back(pip(c,pii(a,b)));
  }
  for(int i = 0; i < r; i++) {
    cin >> a >> b >> c;
    rodovia.push_back(pip(c,pii(a,b)));
  }

  sort(ferrovia.begin(), ferrovia.end());
  sort(rodovia.begin(), rodovia.end());

  for(int i = 0; i < f; i++) {
    int x = ferrovia[i].second.first;
    int y = ferrovia[i].second.second;
    c = ferrovia[i].first;
    if(find(x) != find(y)) {
      join(x,y);
      ans+=c;
    }
  }
  for(int i = 0; i < r; i++) {
    int x = rodovia[i].second.first;
    int y = rodovia[i].second.second;
    c = rodovia[i].first;
    if(find(x) != find(y)) {
      join(x,y);
      ans+=c;
    }
  }

  cout << ans << endl;

  return 0;
}
