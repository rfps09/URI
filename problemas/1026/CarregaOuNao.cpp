#include <iostream>
 
using namespace std;
 
int main() {
    unsigned long long int a = 0, b = 0;
    unsigned long long resultado = 0;
    
    while(scanf("%lld%lld", &a, &b) != EOF) {
        resultado = a^b;
        printf("%lld\n", resultado);
    }
 
    return 0;
}