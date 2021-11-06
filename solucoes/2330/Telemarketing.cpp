#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

const int MAXN = 1E3+4;

int vet[MAXN];

int main () {
  ios::sync_with_stdio(0);
  int n = 0, l = 0, t = 0;
  pair<int, int> aux;
  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> fila;
  
  cin >> n >> l;

  for(int i = 1; i <= l; i++) {
    cin >> t;
    if(i <= n) {
      fila.push(make_pair(t, i));
      vet[i]++;
    } else {
      aux = fila.top();
      fila.pop();
      vet[aux.second]++;
      fila.push(make_pair(aux.first + t, aux.second));
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << i << " " << vet[i] << endl;
  }

  return 0;
}
