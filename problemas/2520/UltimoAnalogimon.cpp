#include <iostream>

using namespace std;

int main() {
    int **Vector, x = 0, y = 0, n = 0, m = 0, x1 = 0, x2 = 0, y1 = 0, y2 = 0, soma = 0;

    while (scanf("%d%d", &n, &m) != EOF) {
        Vector = (int **)malloc(n*sizeof(int));

        for (x = 0; x < n; x++) {
            Vector[x] = (int *)malloc(m*sizeof(int));
        }

        for (x = 0; x < n; x++) {
            for (y = 0; y < m; y++) {
                scanf("%d", &Vector[x][y]);
                if (Vector[x][y] == 1) {
                    x1 = x;
                    y1 = y;
                }
                else if (Vector[x][y] == 2) {
                    x2 = x;
                    y2 = y;
                }
            }
        }

        x = x1 - x2;
        y = y1 - y2;

        if (x < 0) {
            x *= -1;
        }
        if (y < 0) {
            y *= -1;
        }

        soma = x + y;

        printf("%d\n", soma);

        for (x = 0; x < n; x++) {
            free(Vector[x]);
        }
        
        free(Vector);
    }

    return 0;
}
