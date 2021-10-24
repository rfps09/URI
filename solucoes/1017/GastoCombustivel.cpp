#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int h = 0, v = 0;
    float resultado = 0.0;

    scanf("%d", &h);
    scanf("%d", &v);

    resultado = v * h / 12.00;

    printf("%.3f\n", resultado);
 
    return 0;
}