#include <iostream>
#include <cstring>
 
using namespace std;

typedef struct {
    int x = 0;
    int y = 0;
    int z = 0;
}Expressoes;

typedef struct {
    char n[50];
    int e = 0;
    char r;
    bool pass = false;
}Jogadores;

void lexi(char **lexi, int t) {
    int i, continua, fim = t;
    char auxi[50];

    do {
        continua = 0;
        for (i = 0; i < fim - 1; i++) {
            if (strcmp(lexi[i], lexi[i+1]) > 0) {
                strcpy(auxi, lexi[i]);
                strcpy(lexi[i], lexi[i+1]);
                strcpy(lexi[i+1], auxi);
                continua = i;
            }
        }
        fim--;
    } 
    while (continua != 0);
    
}

int main() {
    int t = 0, i = 0, index = 0, indice = 0;
    bool validacaoAllPass = true;
    bool validacaoNonePass = true;
    char **aux;
    Jogadores *jogador;
    Expressoes *expressao;

    while( scanf("%d", &t) == 1 ){
        validacaoAllPass = true;
        validacaoNonePass = true;
        indice = 0;
        jogador = (Jogadores*)malloc(t*sizeof(Jogadores));
        expressao = (Expressoes*)malloc(t*sizeof(Expressoes));
        aux = (char**)malloc(t*sizeof(char));
        for (i = 0; i < t; i++) {
            aux[i] = (char*)malloc(t*sizeof(char));
        }

        for (i = 0; i < t; i++) {
            scanf("%d%*c%d%*c%d", &expressao[i].x, &expressao[i].y, &expressao[i].z);
        }
        
        for (i = 0; i < t; i++) {
            scanf("%s%*c%d%*c%c", jogador[i].n, &jogador[i].e, &jogador[i].r);
            index = jogador[i].e;

            if(jogador[i].r == '+'){
                if( (expressao[index-1].x + expressao[index-1].y) == expressao[index-1].z) {
                    jogador[i].pass = true;
                    validacaoNonePass = false;
                }
                else {
                    jogador[i].pass = false;
                    validacaoAllPass = false;
                    strcpy(aux[indice], jogador[i].n);
                    indice++;
                }
            }
            else if(jogador[i].r == '-'){
                if( (expressao[index-1].x - expressao[index-1].y) == expressao[index-1].z) {
                    jogador[i].pass = true;
                    validacaoNonePass = false;
                }
                else {
                    jogador[i].pass = false;
                    validacaoAllPass = false;
                    strcpy(aux[indice], jogador[i].n);
                    indice++;
                }
            }
            else if(jogador[i].r == '*'){
                if( (expressao[index-1].x * expressao[index-1].y) == expressao[index-1].z) {
                    jogador[i].pass = true;
                    validacaoNonePass = false;
                }
                else {
                    jogador[i].pass = false;
                    validacaoAllPass = false;
                    strcpy(aux[indice], jogador[i].n);
                    indice++;
                }
            }
            else if(jogador[i].r == 'I'){
                if( (expressao[index-1].x * expressao[index-1].y) != expressao[index-1].z && (expressao[index-1].x - expressao[index-1].y) != expressao[index-1].z && (expressao[index-1].x + expressao[index-1].y) != expressao[index-1].z) {
                    jogador[i].pass = true;
                    validacaoNonePass = false;
                }
                else {
                    jogador[i].pass = false;
                    validacaoAllPass = false;
                    strcpy(aux[indice], jogador[i].n);
                    indice++;
                }
            }
        }

        lexi(aux,indice);
        
        if (validacaoAllPass == true) {
            printf("You Shall All Pass!\n");
        }
        else if (validacaoNonePass == true) {
            printf("None Shall Pass!\n");
        }
        else{
            for (i = 0; i < indice; i++) {
                printf("%s ", aux[i]);
            }
            printf("\n");
        }

        

        for (i = 0; i < t; i++) {
            free(aux[i]);
        }
        free(aux);
        free(jogador);
        free(expressao);
    }

    return 0;
}