#include <iostream>
 
using namespace std;
 
int main() {
     int n = 0, resposta = 0;
     
     scanf("%d", &n);
     
     for(int i = 0; i < n; i++) {
         scanf("%d", &resposta);
         printf("resposta %d: %d\n", i+1, resposta);
     }
 
    return 0;
}
