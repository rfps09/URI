#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

const int MAXN = 100;
const int INF = INT_MAX/2;

int grafinho[MAXN][MAXN];

int main () {
  ios::sync_with_stdio(0);
  int n=0, m=0, u=0, v=0, w=0;
  int ansx=0, ansy=INF;

  cin >> n >> m;

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      grafinho[i][j] = INF;
      if(i==j) grafinho[i][j]=0;
    }
  }

  for(int i=0; i<m; i++){
    cin >> u >> v >> w;
    grafinho[u][v] = w;
    grafinho[v][u] = w;
  }

  for(int k=0; k<n; k++){
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        int cost = grafinho [i][j];
        int ikj = grafinho[i][k] + grafinho[k][j];
        grafinho[i][j] = min(cost,ikj);
      }
    }
  }

  for(int i=0; i<n; i++){
    ansx = grafinho[i][0];
    for(int j=0; j<n; j++){
      if(grafinho[i][j] > ansx && grafinho[i][j] != INF)
        ansx = grafinho[i][j];
    }
    if(ansx < ansy) ansy = ansx;
  }

  cout << ansy << endl;

  return 0;
}
