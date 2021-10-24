#include <iostream>

using namespace std;
 
int main() {
    long long int i = 0, n = 0, *x, soma = 0, resultado = 0, somaP1 = 0, somaP2 = 0, teste = 0;

    while (scanf("%lld", &n) == 1) {
        soma = 0;
        somaP1 = 0;
        somaP2 = 0;
        x = (long long int *)malloc(n*sizeof(long long int));
        for (i = 0; i < n; i++) {
            scanf("%lld", &x[i]);
            soma += x[i];
        }

        resultado = (soma / 2) + (soma % 2);

        for (i = 0; i < n; i++) {
            if ( somaP1+x[i] < resultado) {
                somaP1 = somaP1 + x[i];
            }
            else{
                somaP2 = soma - somaP1 - x[i];
                
                if (somaP1 < somaP2) {
                    somaP1 = somaP1 + x[i];
                }
                break;
            }
        }

        somaP2 = soma - somaP1;

        if (somaP1 > somaP2) {
            printf("%lld\n", somaP1 - somaP2);
        }
        else{
            printf("%lld\n", somaP2 - somaP1);
        }

        free(x);
    }

    return 0;
}