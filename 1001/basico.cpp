#include <iostream>
 
using namespace std;
 
int main() {
    int a = 0, b = 0, x = 0;
    
    scanf("%d%*c%d", &a, &b);
    
    x = a + b;
    
    printf("X = %d\n", x);
 
    return 0;
}