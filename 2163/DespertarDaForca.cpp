#include <iostream>

using namespace std;

int main() {
    int **Vector, n = 0, m = 0, x = 0, y = 0, validacao = 1;

    scanf("%d%d", &n, &m);
    Vector = (int **)malloc(n*sizeof(int));
    
    for (x = 0; x < n; x++) {
        Vector[x] = (int *)malloc(m*sizeof(int));
    }

    for (x = 0; x < n; x++) {
        for (y = 0; y < m; y++) {
            scanf("%d", &Vector[x][y]);
        }
    }

    for (x = 0; x < n; x++) {
        for (y = 0; y < m; y++) {
            if (Vector[x][y] == 42 && x > 0 && y > 0 && x < n-1 && y < m-1) {
            if (Vector[x][y+1] == 7 && Vector[x][y-1] == 7 && Vector[x+1][y] == 7 && Vector[x-1][y] == 7) {
            if (Vector[x+1][y+1] == 7 && Vector[x+1][y-1] == 7 && Vector[x-1][y+1] == 7 && Vector[x-1][y-1] == 7) {
                validacao = 0;
                break;
            }
            }
            }
        }

        if (validacao == 0) {
            break;
        }
    }

    if (validacao == 0) {
        printf("%d %d\n", x+1, y+1);
    }
    else {
        printf("0 0\n");
    }

    return 0;
}
