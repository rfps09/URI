#include <iostream>

using namespace std;

int main () {
    int Ihora = 0, Iminuto = 0, Fhora = 0, Fminuto = 0, resultado = 0,resultadoHora = 0, resultadoMinuto = 0;

    scanf("%d%*c%d%*c%d%*c%d", &Ihora, &Iminuto, &Fhora, &Fminuto);

    if (Ihora >= Fhora && Iminuto >= Fminuto) {
        Fhora = Fhora + 24;
    }

    //calculo
    resultado = (Fhora * 60 + Fminuto) - (Ihora * 60 + Iminuto);
    resultadoHora = resultado / 60;
    resultadoMinuto = resultado - resultadoHora * 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resultadoHora, resultadoMinuto);
    
    return 0;
}