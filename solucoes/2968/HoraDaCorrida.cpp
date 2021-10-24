#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
    long long int v = 0, n = 0, i = 0;
    long long int resultado = 0;
    double porcetagem = 0.00;

    scanf("%d%*c%d", &v, &n);

    for (i = 1; i < 10; i++) {
        porcetagem = i*10*1.00/100*1.00;
        resultado = ceil(v * n * porcetagem);
        printf("%lld", resultado);
        if(i != 9) {
            printf(" ");
        }
    }

    printf("\n");
    
    return 0;
}