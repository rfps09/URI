#include <iostream>
 
using namespace std;
 
int main() {
    int d = 0, m = 0, a = 0;
    
    scanf("%d%*c%d%*c%d", &d, &m, &a);
    
    printf("%02d/%02d/%02d\n", m,d,a);
    printf("%02d/%02d/%02d\n", a,m,d);
    printf("%02d-%02d-%02d\n", d,m,a);
 
    return 0;
}