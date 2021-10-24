#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
    int n = 1;
    unsigned long long soma = 0;
    
    while(n != 0) {
        soma = 0;
        
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        
        for (int i = 1; i <= n; i++) {
            soma += pow(i,2);
        }
        
        printf("%lld\n", soma);
    }
 
    return 0;
}