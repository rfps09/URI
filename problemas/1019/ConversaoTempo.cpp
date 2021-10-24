#include <iostream>
 
using namespace std;
 
int main() {
    int n = 0;
    int hora = 0, minuto = 0, segundo = 0;
    
    scanf("%d", &n);
    
    segundo = n % 60;
    n /= 60;
    minuto = n % 60;
    hora = n / 60;
    
    printf("%d:%d:%d\n", hora, minuto, segundo);
    
    return 0;
}