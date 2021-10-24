#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int i = 0, validacao = 1;
    char n[20];

    scanf("%s", n);

    for (i = 0; i < strlen(n)-1; i++) {
        if (n[i] == '1' && n[i+1] == '3') {
            validacao = 0;
            break;
        }
    }

    if (validacao == 0) {
        printf("%s es de Mala Suerte\n", n);
    }
    else {
        printf("%s NO es de Mala Suerte\n", n);
    }

    return 0;
}