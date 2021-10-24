#include <iostream>
 
using namespace std;
 
int main() {
    int a = 0, b = 0, c = 0, d = 0;
    
    scanf("%d%*c%d%*c%d%*c%d", &a, &b, &c, &d);
    
    if (a % 2 == 0 && c > 0 && d > 0 && c+d > a+b && b > c && d > a) {
        printf("Valores aceitos\n");
    }
    else {
        printf("Valores nao aceitos\n");
    }
 
    return 0;
}