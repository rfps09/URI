#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t = 0, i = 0, validacao = 0;
    char s1[8], s2[8];

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        setbuf(stdin, NULL);
        scanf("%s%s", s1, s2);
        setbuf(stdin, NULL);

        if (strcmp(s1, "pedra") == 0 && (strcmp(s2, "lagarto") == 0 || strcmp(s2, "tesoura") == 0)) {
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        else if (strcmp(s1, "papel") == 0 && (strcmp(s2, "pedra") == 0 || strcmp(s2, "Spock") == 0)) {
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        else if (strcmp(s1, "tesoura") == 0 && (strcmp(s2, "papel") == 0 || strcmp(s2, "lagarto") == 0)) {
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        else if (strcmp(s1, "lagarto") == 0 && (strcmp(s2, "papel") == 0 || strcmp(s2, "Spock") == 0)) {
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        else if (strcmp(s1, "Spock") == 0 && (strcmp(s2, "pedra") == 0 || strcmp(s2, "tesoura") == 0)) {
            printf("Caso #%d: Bazinga!\n", i+1);
        }
        else if (strcmp(s1, s2) == 0) {
            printf("Caso #%d: De novo!\n", i+1);
        }
        else {
            printf("Caso #%d: Raj trapaceou!\n", i+1);
        }
    }

    return 0;
}
