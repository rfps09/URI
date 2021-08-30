#include <iostream>
#include <cmath>

using namespace std;

bool circollider(double xf, double xi, double yf, double yi, double r1, double r2, double vi) {
    int soma1 = pow(xi - xf,2);
    int soma2 = pow(yi - yf,2);

    if (soma1 < 0) {
        soma1 *= -1;
    }
    if (soma2 < 0) {
        soma2 *= -1;
    }

    return sqrt(soma1 + soma2) <= r1 + r2 - vi * 1.5 ; 
}

int main() {
    double xf = 0, yf = 0, xi = 0, yi = 0, vi = 0, r1 = 0, r2 = 0;
    bool validacao;

    while (scanf("%lf%lf%lf%lf%lf%lf%lf", &xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF) {
        validacao =  circollider(xf, xi, yf, yi, r1, r2, vi);

        if (validacao == true){
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
    }

    return 0;
}
