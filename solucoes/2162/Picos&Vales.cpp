#include <iostream>

using namespace std;

int main() {
    int n = 0, h[100], i = 0, validacao = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }

    if (n > 2) {
        for (i = 0; i < n-2; i++) {
            if ( (h[i] >= h[i+1] && h[i+1] >= h[i+2]) || (h[i] <= h[i+1] && h[i+1] <= h[i+2]) ) {
                validacao = 0;
                break;
            }
        }
    }
    else if (n == 2 && h[1] == h[0]) {
        validacao = 0;
    }

    printf("%d\n", validacao);

    return 0;
}
