#include <iostream>

using namespace std;

int main() {
    long long int m = 0, n = 0, soma = 0;
    int i = 0;

    while (scanf("%lld%*c%lld", &m, &n) != EOF) {
        for (i = m-1; i > 0; i--) {
            m *= i;
        }
        for (i = n-1; i > 0; i--) {
            n *= i;
        }
        if (m == 0) {
            m = 1;
        }
        if (n == 0) {
            n = 1;
        }
        soma = m + n;

        printf("%lld\n", soma);
    }
    
    return 0;
}