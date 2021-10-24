#include <iostream>

using namespace std;

int main() {
    long long int a = 0, b = 0, diferenca = 0;

    while (scanf("%lld%*c%lld", &a, &b) != EOF) {
        diferenca = a - b;

        if (diferenca < 0) {
            diferenca *= -1;
        }
        
        printf ("%d\n", diferenca);
    }

    return 0;
}