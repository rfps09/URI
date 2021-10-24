#include <iostream>
#include <algorithm>
 
using namespace std;
 
typedef struct {
    int pontos = 0;
    int index = 0;
}GP;
 
int comparer(GP a, GP b) {
    if(a.pontos != b.pontos) {
        return a.pontos > b.pontos;
    }
 
    return a.index < b.index;
}
 
int vetorK[100];
int gp[100][100];
GP gpAux[100];
 
int main () {
    int g = 0, p = 0, s = 0, k = 0;
    int i = 0, j = 0, y = 0;
 
    while (cin >> g >> p && g && p) {
        for(i = 0; i < g; i++) {
            for(j = 0; j < p; j++) {
                cin >> gp[i][j];
            }
        }
 
        cin >> s;
 
        for (i = 0; i < s; i++) {
            for (j = 0; j < p; j++) {
                gpAux[j].pontos = 0;
                gpAux[j].index = j+1;
            }
 
            cin >> k;
            for (j = 0; j < k; j++) {
                cin >> vetorK[j];
            }
 
            for (j = j; j < p; j++) {
                vetorK[j] = 0;
            }
 
            for (j = 0; j < g; j++) {
                for (y = 0; y < p; y++) {
                    gpAux[y].pontos += vetorK[gp[j][y]-1];
                }
            }
 
            sort(gpAux, gpAux+p, comparer);
 
            cout << gpAux[0].index;
 
            for(j = 1; j < p; j++) {
                if(gpAux[j].pontos == gpAux[j-1].pontos) {
                    cout << " " << gpAux[j].index;
                }
                else {
                    break;
                }
            }
 
            cout << endl;
        }
    }
 
    return 0;
}
