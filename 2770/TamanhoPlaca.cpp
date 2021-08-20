#include <iostream>
 
using namespace std;
 
int main() {
    int i = 0, m = 0, x[100001], y[100001], teste[100001];

    while(scanf("%d%*c%d%*c%d", &x[0], &y[0], &m) != EOF) {
        for (i = 1; i <= m; i++) {
            scanf("%d%*c%d", &x[i], &y[i]);

            if (x[i] > y[i]) {
                if (x[0] > y [0]) {
                    if (x[i] > x[0] || y[i] > y[0]) {
                        teste[i] = 1;
                    }
                    else {
                        teste[i] = 0;
                    }
                }
                else {
                    if (x[i] > y[0] || y[i] > x[0]) {
                        teste[i] = 1;
                    }
                    else {
                        teste[i] = 0;
                    }
                }
            }
            else {
                if (x[0] > y [0]) {
                    if (y[i] > x[0] || x[i] > y[0]) {
                        teste[i] = 1;
                    }
                    else {
                        teste[i] = 0;
                    }
                }
                else {
                    if (y[i] > y[0] || x[i] > x[0]) {
                        teste[i] = 1;
                    }
                    else {
                        teste[i] = 0;
                    }
                }
            }
        }

        for (i = 1; i <= m; i++) {
            if (teste[i] == 1) {
                printf("Nao\n");
            }
            else {
                printf("Sim\n");
            }
        }
        
    }

    return 0;
}