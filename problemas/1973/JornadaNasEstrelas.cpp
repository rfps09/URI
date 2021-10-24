#include <iostream>
 
using namespace std;
 
int main() {
    long long int x = 0, i = 0, *n, roubado = 0, nRoubado = 0, estrelas = 0;
    
    scanf("%lld", &x);
    
    n = (long long int *)malloc(x * sizeof(long long int));
    
    for(i = 0; i < x; i++){
        scanf("%lld", &n[i]);
        if(i == 0) {
            nRoubado = n[i];    
        }
        else{
            nRoubado += n[i];
        }
    }
    
    //calculo
    i = 0;
    while(x > i){
        if(n[i] % 2 == 0){
            if(n[i] >  0) {
                n[i]= n[i] - 1;
                roubado++;
            }

            i = i - 1;
            if (i < 0) {
                estrelas += 1;
                break;
            }
        }
        else {
            if(n[i] >  0) {
                n[i]= n[i] - 1;
                roubado++;
            }
            if (i >= estrelas) {
                estrelas = i + 1;
            }
            i++;
        }
    }
    
    nRoubado -= roubado;
    
    printf("%lld %lld\n", estrelas, nRoubado);
    
    return 0;
}