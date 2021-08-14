#include <iostream>

using namespace std;

void bubbleSort(int *v, int N) {
    int i, continua, aux, fim = N;

    do {
        continua = 0;
        for (i = 0; i < fim - 1; i++) {
            if (v[i] > v[i+1]) {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    } 
    while (continua != 0);
    
}

int main() {
    int vetor[3], aux[3], i = 0;

    for (i = 0; i < 3; i++) {
        scanf("%d", &vetor[i]);
        aux[i] = vetor[i];
    }
    
    bubbleSort(vetor, 3);

    for (i = 0; i < 3; i++) {
        printf("%d\n", vetor[i]);
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        printf("%d\n", aux[i]);
    }
    

    return 0;
}