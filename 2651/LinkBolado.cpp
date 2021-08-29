#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int x = 0, y = 0;
    char nome[100001];
    char zezinho[] = "zelda";
    char zezao[] = "ZELDA";
    int validacao = 0;

    scanf("%s", nome);

    for (x = 0; x < strlen(nome)-4; x++) {
        for (y = x; y < x + 5; y++) {
            if (nome[y] == zezinho[y-x] || nome[y] == zezao[y-x]) {
                validacao = 0;
            }
            else {
                validacao = 1;
                break;
            }
        }
        if (validacao == 0) {
            break;
        }
    }

    if (validacao == 0) {
        printf("Link Bolado\n");
    }
    else {
        printf("Link Tranquilo\n");
    }

    return 0;
}