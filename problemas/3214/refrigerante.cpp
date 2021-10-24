#include <iostream>

using namespace std;

int main() {
    int e = 0, f = 0, c = 0, soma = 0, resto = 0;

    scanf("%d%d%d", &e, &f, &c);

    resto = e + f;

    while (resto >= c) {
        soma += resto / c;
        resto = (resto / c) + (resto % c);
    }

    printf("%d\n", soma);

    return 0;
}