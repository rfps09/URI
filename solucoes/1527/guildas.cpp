#include <iostream>

using namespace std;

const int MAXN = 1E5;

int pai[MAXN];
int peso[MAXN];
int pontos[MAXN];

int find(int x) {
  if(pai[x] == x) return x;
  return pai[x] = find(pai[x]);
}

void join(int x, int y) {
  int a = find(x);
  int b = find(y);

  if(a == b) return;
  
  if(peso[a] < peso[b]) {
    pai[a] = b;
    pontos[b] += pontos[a];
  }
  else if(peso[a] > peso[b]) {
    pai[b] = a;
    pontos[a] += pontos[b];
  }
  else {
    pai[a] = b;
    peso[b]++;
    pontos[b] += pontos[a];
  }

}

int main () {
  ios::sync_with_stdio(0);

  int n = 0, m = 0;
  int a = 0, b = 0;
  int op = 0, count = 0;

  while(cin >> n >> m && n && m) {
    for(int i = 1; i <= n; i++) {
      pai[i] = i;
    }

    for(int i = 1; i <= n; i++) {
      cin >> pontos[i];
    }

    for(int i = 0; i < m; i++) {
      cin >> op >> a >> b;
      if(op == 1) {
        join(a,b);
      }
      else {
        a = find(a);
        b = find(b);
        if(find(1) == a && pontos[a] > pontos[b]) count++;
        else if(find(1) == b && pontos[b] > pontos[a]) count++;
      }
    }
    cout << count << endl;
    count = 0;
  }

  return 0;
}
