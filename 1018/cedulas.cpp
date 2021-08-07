#include <iostream>
#include <string>

using namespace std;

int main () {
    int money = 0;
    int resultado = 0;

    scanf("%d", &money);

    printf ("%d\n", money);
    

        resultado =  money / 100;
        printf ("%d nota(s) de R$ 100,00\n", resultado);
        money = money - resultado * 100;



        resultado = money / 50;
        printf ("%d nota(s) de R$ 50,00\n", resultado);
        money = money - resultado * 50;



        resultado = money / 20;
        printf ("%d nota(s) de R$ 20,00\n", resultado);
        money = money - resultado * 20;



        resultado = money / 10;
        printf ("%d nota(s) de R$ 10,00\n", resultado);
        money = money - resultado * 10;



        resultado = money / 5;
        printf ("%d nota(s) de R$ 5,00\n", resultado);
        money = money - resultado * 5;



        resultado = money / 2;
        printf ("%d nota(s) de R$ 2,00\n", resultado);
        money = money - resultado * 2;



        resultado = money / 1;
        printf("%d nota(s) de R$ 1,00\n", resultado);
        money = money - resultado * 1;

 
    return 0;
}