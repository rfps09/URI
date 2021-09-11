#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n = 0, i = 0, h = 0, HB = 0, HA = 0, HM = 0, HD = 0;
    int producao = 0;
    char elfo[12];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%*s %s %d", elfo, &h);
        
        if (strcmp(elfo, "bonecos") == 0) {
            HB += h;
        }
        else if (strcmp(elfo, "arquitetos") == 0) {
            HA += h;
        }
        else if (strcmp(elfo, "musicos") == 0) {
            HM += h;
        }
        else if (strcmp(elfo, "desenhistas") == 0) {
            HD += h;
        }
    }

    producao = HB / 8 + HA / 4 + HM / 6 + HD / 12;

    printf("%d\n", producao);

    return 0;
}
