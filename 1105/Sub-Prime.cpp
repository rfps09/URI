#include <iostream>

using namespace std;

int main() {
    int i = 0, n = 0, b = 0, d = 0, c = 0, v = 0;
    int r[20];
    int debentures[20];
    int validacao = 0;

    while(scanf("%d%d", &b, &n) && n > 0 && b > 0) {
        for (i = 0; i < b; i++) {
            debentures[i] = 0;
        }

        for (i = 0; i < b; i++) {
            scanf("%d", &r[i]);
        }

        for (i = 0; i < n; i++) {
            scanf("%d%d%d", &d, &c, &v);
            r[c-1] += v;
            debentures[d-1] += v;
        }
        
        for (i = 0; i < b; i++) {
            if (debentures[i] > r[i]) {
                validacao = 1;
                break;
            }
            else {
                validacao = 0;
            }
        }

        if (validacao == 1) {
            printf("N\n");
        }
        else {
            printf("S\n");
        }
    }

    return 0;
}
