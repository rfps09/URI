#include <iostream>
 
using namespace std;
 
int main() {
    double a = 0.0, b = 0.0, c = 0.0, resultado = 0.0;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    resultado = a * c / 2;
    printf("TRIANGULO: %.3lf\n", resultado);

    resultado = 3.14159 * c * c;
    printf("CIRCULO: %.3lf\n", resultado);

    resultado = (a + b) * c / 2;
    printf("TRAPEZIO: %.3lf\n", resultado);

    resultado = b * b;
    printf("QUADRADO: %.3lf\n", resultado);

    resultado = a * b;
    printf("RETANGULO: %.3lf\n", resultado);
 
    return 0;
}