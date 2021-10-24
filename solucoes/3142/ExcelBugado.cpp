#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int numCol(char *tabela, int tamanho) {
    int numero = 0, i = 0;

    for (i = 0; i < tamanho; i++){
        numero += (tabela[i] - 'A' + 1)  * pow(26, tamanho - (i+1));
    }

    return numero;
}
 
int main() {
    int num = 0;
    char table[11];

    while(scanf("%s%*c", table) != EOF) {
        int tam = strlen(table);
        
        if(tam < 4) {
            num = numCol(table, tam);
            
            if (num <= 16384) {
            printf("%d\n", num);
            }
            else {
                printf("Essa coluna nao existe Tobias!\n");
            }
        }
        else {
            printf("Essa coluna nao existe Tobias!\n");
        }
    }
 
    return 0;
}
