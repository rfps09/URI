#include <iostream>
 
using namespace std;
 
int main() {
    float x[3], aux = 0, resultado = 0;
    int i = 0;

    scanf("%f%*c%f%*c%f", &x[0], &x[1], &x[2]);

    for (i = 0; i < 3; i++) {
        if(x[1] < x [2]) {
            aux = x[1];
            x[1] = x[2];
            x[2] = aux;
        }
        else if (x[1] > x [0]) {
            aux = x[1];
            x[1] = x[0];
            x[0] = aux;
        }
    }
    
    if (x[0] >= x[1] + x[2]){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if (x[0] * x[0] == x[1] * x[1] + x[2] * x[2]){
            printf("TRIANGULO RETANGULO\n");
        }

        else if (x[0] * x[0] > x[1] * x[1] + x[2] * x[2]){
            printf("TRIANGULO OBTUSANGULO\n");
        }

        else if (x[0] * x[0] < x[1] * x[1] + x[2] * x[2]){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (x[0] == x[1] && x[1] == x[2]){
            printf("TRIANGULO EQUILATERO\n");
        }

        else if (x[0] == x[1] || x[0] == x[2] || x[1] == x[2]){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}