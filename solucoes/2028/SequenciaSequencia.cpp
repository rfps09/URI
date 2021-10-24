#include <iostream>
 
using namespace std;
 
int main() {
    int n = 0, cont = 0, num = 1, x = 0, y = 0;

    while (scanf("%d", &n) == 1) {
        cont++;
        num = 1;
        for (x = 0; x < n; x++) {
            num = num + x + 1;
        }

        if (num == 1) {
            printf("Caso %d: %d numero\n", cont, num);
        }
        else{
            printf("Caso %d: %d numeros\n", cont, num);
        }

        for (x = 0; x <= n; x++) {
            if (x == 0 && n > 0) {
                printf("%d ", x);
            }
            else if (x == 0 && n == 0) {
                printf("%d\n", x);
            }
            for (y = 0; y < x; y++) {
                if(y == x-1 && x == n){
                    printf("%d\n", x);
                }
                else{
                    printf("%d ", x);
                }
            }
        }
        
        printf("\n");
    }
    
    return 0;
}