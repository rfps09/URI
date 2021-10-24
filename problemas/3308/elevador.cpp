#include <iostream>

using namespace std;

int main() {
    int n = 0, m = 0, a = 0, b = 0, c = 0, soma = 0;
    int i = 0, validacao = 0;
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d%d%d%d", &m, &a, &b, &c);

        soma = a + b + c;

        if (m == 0) {
            if (soma > 0 && soma < 2) {
                printf("1\n");
            }
            else if (soma == 0) {
                printf("0\n");
            }
            else {
                printf("X\n");
            }
        }
        else {
            if (soma < 2) {
                printf("0\n");
            }
            else {
                printf("X\n");
            }
        }
    }

    return 0;
}
