#include <iostream>
 
using namespace std;

int main() {
    char nome[25];
    double a = 0.0, b = 0.0, salario = 0.0;

    scanf("%s[^\n]", &nome);
    setbuf(stdin, NULL);
    scanf("%lf", &a);
    scanf("%lf", &b);

    salario = a + b * 0.15;

    printf("TOTAL = R$ %.2lf\n", salario);
 
    return 0;
}