#include <iostream>
 
using namespace std;
 
int main() {
    int a = 0, b = 0, c = 0, d = 0, diferenca = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    diferenca = a * b - c * d;

    printf("DIFERENCA = %d\n", diferenca);
 
    return 0;
}