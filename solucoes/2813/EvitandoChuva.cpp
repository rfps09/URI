#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n = 0, c = 0, e = 0, Gc = 0, Ge = 0, i = 0;
    char tempo[12];

    scanf("%d%*c", &n);

    for (i = 0; i < n; i++) {
        scanf("%[^\n]%*c", tempo);
        if (strcmp(tempo, "sol chuva") == 0) {
            Gc++;
            Ge--;
            if (Ge < 0) {
                Ge++;
                e++;
            }    
        }
        else if (strcmp(tempo, "chuva sol") == 0) {
            Ge++;
            Gc--;
            if (Gc < 0) {
                Gc++;
                c++;
            }
        }
        else if (strcmp(tempo, "chuva chuva") == 0) {
            Ge++;
            Gc--;
            if (Gc < 0) {
                Gc++;
                c++;
            }
            Gc++;
            Ge--;
        }
    }

    printf("%d %d\n",c,e);

    return 0;
}