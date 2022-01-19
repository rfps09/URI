#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  int n = 0, ascii = 0;
  string cifra;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> cifra;
    cin >> ascii;

    for(int j = 0; j < cifra.length(); j++) {
      if((int)cifra[j]-ascii < 65) {
        int mod = 64 - ((int)cifra[j] - ascii);
        cifra[j] = 90 - mod;
      }
      else {
        cifra[j]-=ascii;
      }
    }

    cout << cifra << endl;
  }
  
  return 0;
}
