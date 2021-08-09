#include <iostream>
 
using namespace std;
 
int main() {
    int a = 0, b = 0;
    float c = 0.0, salario = 0.0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &c);

    salario = b * c;

    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", salario);
 
    return 0;
}