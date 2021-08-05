#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main () {
    char teste[] = "0.01";
    char testeGod[] = "0.03";
    double resultado = 0.01;
    double resultadoGod = 0.03;

    resultado = strtold(teste, NULL);
    resultadoGod = resultadoGod / resultado;

    printf("\n%.0lf\n", floor(resultadoGod));

    return 0; 
}