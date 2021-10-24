#include <iostream>

using namespace std;

int main() {
    int m = 0, n = 0, x = 0, y = 0, soma = 0, teste = 0;
    
    while(scanf("%d%d", &m, &n) != EOF) {
        soma = 0;
        
        for(x = 0; x < m; x++) {
            for(y = 0; y < n; y++){
                scanf("%d", &teste);
                soma += teste;
            }
        }
        
        printf("%d saca(s) e %d litro(s)\n", soma / 60, soma % 60);
    }

    return 0;
}
