#include <iostream>
 
using namespace std;
 
int main() {
    int x[3], maior = 0;
    
    scanf("%d%*c%d%*c%d", &x[0], &x[1], &x[2]);
    
    for(int i = 0; i < 3; i++){
        if(x[i] > maior){
            maior = x[i];
        }
    }
    
    printf("%d eh o maior\n", maior);
 
    return 0;
}