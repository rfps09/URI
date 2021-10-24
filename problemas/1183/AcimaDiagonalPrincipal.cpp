#include <iostream>

using namespace std;

int main() {
    int count = 0, x = 0, y = 0, media = 0;
    float m[12][12], soma = 0;
    char o;

    scanf("%c", &o);
    for (x = 0; x < 12; x++) {
        count++;
        for (y = 0; y < 12; y++) {
            scanf("%f", &m[x][y]);
            if (y >= count) {
                soma += m[x][y];
                media++;
            }
        }
    }

    if (o == 'S') {
        printf("%.1f\n", soma);
    }
    else {
        printf("%.1f\n", soma/media);
    }

    return 0;
}
