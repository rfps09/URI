#include <iostream>

using namespace std;

int main() {
    int m = NULL, n = NULL, i = 0, aux = 0;

    while (scanf("%d%d", &m, &n) != EOF && m > 0 && n > 0) {
        if (m > n) {
            aux = m;
            m = n;
            n = aux;
        }
        
        aux = 0;

        for (i = m; i <= n; i++) {
            aux += i;
            printf("%d ", i);
        }
        
        printf("Sum=%d\n", aux);
    }

    return 0;
}