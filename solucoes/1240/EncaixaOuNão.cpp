#include <iostream>

using namespace std;

int main() {
    int n = 0, i = 0, a = 0, b = 0;
    bool verificacao;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        verificacao = true;

        scanf("%d%d", &a, &b);
        
        while (b > 0 && verificacao == true) {
            if (a % 10 == b % 10) {
                verificacao == true;
                a /= 10;
                b /= 10;
            }
            else {
                verificacao = false;
            }
        }

        if (verificacao == true) {
            printf("encaixa\n");
        }
        else {
            printf("nao encaixa\n");
        }
    }
    
    return 0;
}