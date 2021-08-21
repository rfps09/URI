#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    long long int n = 0, intersection = 0, resultado = 0;

    scanf("%lld", &n);

    if (n < 6) {
        printf("%.0f\n", pow(2, n-1));
    }
    else {
        intersection = n * (n-1) * (n-2) * (n-3) / 24;
        resultado = 2 + (n*(n-1) / 2) + (intersection*4 / 2) + (n-1) - (n+intersection);
        printf("%lld\n", resultado);
    }
 
    return 0;
}