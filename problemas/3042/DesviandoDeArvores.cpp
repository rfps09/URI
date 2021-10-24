#include <iostream>

using namespace std;

int main() {
    int m = 1, x = 0, y = 0, index = 1, diff = 0;
    int **matriz;

    while (scanf("%d", &m) != EOF && m != 0) {
        index = 1;
        diff = 0;
        matriz = (int **)malloc(3*sizeof(int));

        for (x = 0; x < 3; x++) {
            matriz[x] = (int *)malloc(m*sizeof(int));
        }
        
        for (x = 0; x < m; x++) {
            for (y = 0; y < 3; y++) {
                scanf("%d", &matriz[y][x]);
            }
        }
        
        for (x = 0; x < m; x++) {
            if (matriz[index][x] == 1) {
                for (y = 0; y < 3; y++) {
                    if (matriz[y][x] == 0) {
                        if (index - y < 0) {
                            diff += (index - y) * -1;
                        }
                        else{
                            diff += index - y;
                        }
                        index = y;
                        break;
                    }
                }                
            }
        }
        
        printf("%d\n", diff);

        for (x = 0; x < 3; x++) {
            free(matriz[x]);
        }

        free(matriz);
    }

    return 0;
}
