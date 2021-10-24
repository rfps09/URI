#include <iostream>
 
using namespace std;
 
int main() {
    int x = 0, y = 0, duracao = 0;

    scanf("%d%*c%d", &x, &y);

    if (y <= x) {
        duracao = y + 24 - x;
    }
    else{
        duracao = y - x;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
 
    return 0;
}