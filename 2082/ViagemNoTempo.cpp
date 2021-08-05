#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int i, x, y, t, n, m, *u, *v, *c, *resultCost;

    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d%*c%d", &n, &m);
        resultCost = (int *)malloc(n * sizeof(int));
        u = (int *)malloc(m * sizeof(int));
        v = (int *)malloc(m * sizeof(int));
        c = (int *)malloc(m * sizeof(int));
        for(x = 0; x < m; x++) {
            scanf("%d%*c%d%*c%d", &u[x],&v[x],&c[x]);
        }

        for(y = 0; y < n; y++){
            resultCost[y] = 0;    
        }

        //calculo
        for(x = 0; x < m; x++) {
            for(y = 0; y < n; y++){
                if (u[x] == y+1 || v[x] == y+1) {
                    resultCost[y] += c[x];
                }
            }
        }

        for (y = 0; y < n-1; y++) {
            if(resultCost[y] < resultCost[y+1]){
                resultCost[y+1] = resultCost[y];
            }
        }

        printf("%d\n", resultCost[n-1]);

        free(u);
        free(v);
        free(c);
        free(resultCost);
    }

    return 0;
}