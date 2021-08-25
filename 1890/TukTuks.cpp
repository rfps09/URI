#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
    int t = 0, x = 0, y = 0;
    long long c = 0, d = 0, resultado = 0;
    
    scanf("%d", &t);
    
    for(x = 0; x < t; x++) {
        scanf("%lld%lld", &c, &d);
        if(c == 0 && d == 0) {
            printf("0\n");
        }
        else {
            resultado = pow(26,c) * pow(10,d);
            
            printf("%lld\n", resultado);
        }
    }
 
    return 0;
}
