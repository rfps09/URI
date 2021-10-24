#include <iostream>
 
using namespace std;
 
int main() {
    int idade = 0;
    int resultado = 0;

    scanf("%d", &idade);

    resultado = idade / 365;
    idade -= resultado * 365;
    printf("%d ano(s)\n", resultado);
    resultado = idade / 30;
    idade -= resultado * 30;
    printf("%d mes(es)\n", resultado);
    resultado = idade;
    printf("%d dia(s)\n", resultado);
 
    return 0;
}