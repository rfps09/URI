#include <iostream>
 
using namespace std;
 
int main() {
    float x = 0, salario = 0;

    scanf("%f", &x);

    if (x >= 0 && x <= 400) {
        salario = x * 1.15;
    }
    else if (x > 400 && x <= 400) {
        salario = x * 1.15;
    }
    else if (x > 0 && x <= 800) {
        salario = x * 1.12;
    }
    else if (x > 800 && x <= 1200) {
        salario = x * 1.10;
    }
    else if (x > 1200 && x <= 2000) {
        salario = x * 1.07;
    }
    else if (x > 2000) {
        salario = x * 1.04;
    }
    
    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", salario - x);
    printf("Em percentual: %.0f %%\n", salario * 100 / x - 100);
 
    return 0;
}