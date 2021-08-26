#include <iostream>

using namespace std;

int fatorar (int numFatorado) {
    for (int i = numFatorado - 1; i > 0; i--) {
        numFatorado *= i;
    }
    return numFatorado;
}

int main() {
    int acm = 0, somaFatoracao = 0, count = 0;

    while (scanf("%d", &acm) != EOF && acm != 0) {
        somaFatoracao = 0;
        count = 0;
        while (acm != 0) {
            count++;
            somaFatoracao += (acm%10) * fatorar(count);
            acm /= 10;
        }
        printf("%d\n", somaFatoracao);
    }

    return 0;
}