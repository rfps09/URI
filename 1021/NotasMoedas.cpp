#include <iostream>
#include <string>

using namespace std;

int main () {
    long double money = 0;
    int resultado = 0;

    scanf("%Lf", &money);

    printf ("NOTAS:\n");

    resultado =  money / 100;
    printf ("%d nota(s) de R$ 100.00\n", resultado);
    money = money - resultado * 100;

    resultado = money / 50;
    printf ("%d nota(s) de R$ 50.00\n", resultado);
    money = money - resultado * 50;

    resultado = money / 20;
    printf ("%d nota(s) de R$ 20.00\n", resultado);
    money = money - resultado * 20;

    resultado = money / 10;
    printf ("%d nota(s) de R$ 10.00\n", resultado);
    money = money - resultado * 10;

    resultado = money / 5;
    printf ("%d nota(s) de R$ 5.00\n", resultado);
    money = money - resultado * 5;

    resultado = money / 2;
    printf ("%d nota(s) de R$ 2.00\n", resultado);
    money = money - resultado * 2;

    printf ("MOEDAS:\n");

    resultado = money / 1;
    printf("%d moeda(s) de R$ 1.00\n", resultado);
    money = money - resultado * 1;

    resultado = money / 0.5;
    printf("%d moeda(s) de R$ 0.50\n", resultado);
    money = money - resultado * 0.5;

    resultado = money / 0.25;
    printf("%d moeda(s) de R$ 0.25\n", resultado);
    money = money - resultado * 0.25;

    resultado = money / 0.10;
    printf("%d moeda(s) de R$ 0.10\n", resultado);
    money = money - resultado * 0.10;

    resultado = money / 0.05;
    printf("%d moeda(s) de R$ 0.05\n", resultado);
    money = money - resultado * 0.05;
    
    resultado = money / 0.01;
    printf("%d moeda(s) de R$ 0.01\n", resultado);

    return 0;
}