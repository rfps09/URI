#include <iostream>
 
using namespace std;
 
int main() {
    int c1 = 0, n1 = 0;
    float v1 = 0;
    int c2 = 0, n2 = 0;
    float v2 = 0;
    float total = 0;
    
    scanf("%d%*c%d%*c%f", &c1,&n1,&v1);
    scanf("%d%*c%d%*c%f", &c2,&n2,&v2);
    
    total = (v1 * n1) + (v2* n2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}