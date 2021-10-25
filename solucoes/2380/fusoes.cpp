#include <iostream>

using namespace std;

const int MAXN = 1E5;

int pai[MAXN];
int peso[MAXN];

int find(int x) {
  if(pai[x] == x) return x;
  return pai[x] = find(pai[x]);
}

void join(int x, int y) {
  int a = find(x);
  int b = find(y);

  if(a == b) return;
  
  if(peso[a] < peso[b]) pai[a] = b;
  else if(peso[a] > peso[b]) pai[b] = a;
  else {
    pai[a] = b;
    peso[b]++;
  } 
}

int main () {
  ios::sync_with_stdio(0);

  int n = 0, k = 0;
  int a = 0, b = 0;
  char op;

  cin >> n >> k;

  for(int i = 1; i <= n; i++) {
    pai[i] = i;
  }

  for(int i = 0; i < k; i++) {
    cin >> op >> a >> b;
    if(op == 'F') {
      join(a,b);
    }
    else {
      if(find(a) == find(b)) cout << "S" << endl;
      else cout << "N" << endl;
    }
  }

  return 0;
}
