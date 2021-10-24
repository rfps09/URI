#include <iostream>
#include <algorithm>
 
using namespace std;
 
int vetorK[100];
int matrizN[100][100];
int vetorAux[101];
 
int main() {
    char aux;
    int n = 0, k = 0;
    int resultado = 0, count = 1, maior = 0;
    int validacao = 0;
 
    cin >> k;
 
    for(int i = 0; i < k; i++) {
        cin >> aux;
        vetorK[i] = aux - '@';
    }
 
    cin >> n;
 
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < k; i++) {
            cin >> aux;
            matrizN[j][i] = aux - '@';
        }
    }
 
    for(int j = 0; j < k; j++) { 
        for(int i = 0; i < n; i++) {
            vetorAux[i] = matrizN[i][j];
        }
 
        sort(vetorAux, vetorAux+n);
        vetorAux[n] = 30;
 
        for(int i = 0; i < n; i++) {
            if(vetorAux[i] != vetorK[j]) {
                validacao = 1;
 
                if(vetorAux[i] == vetorAux[i+1]) {
                    count++;
                    if(count > maior) {
                        maior = count;
                    }
                }
                else {
                    count = 1;
                }
            }
        }
 
        if(validacao == 1 && count > maior) {
            maior = count;
        }
 
        resultado += maior;
 
        count = 1;
        maior = 0;
        validacao = 0;
    }
 
    cout << resultado << endl;
 
    return 0;
}
