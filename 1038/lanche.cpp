#include <iostream>
 
using namespace std;
 
int main() {
    int x = 0;
    float y = 0;

    scanf("%d%*c%f", &x, &y);

    switch(x) {
    case 1:
        y *= 4.00;

        printf ("Total: R$ %.2f\n", y);

        break;
    case 2:
        y *= 4.50;

        printf ("Total: R$ %.2f\n", y);
        break;
    case 3:
        y *= 5.00;

        printf ("Total: R$ %.2f\n", y);
        break;
    case 4:
        y *= 2.00;

        printf ("Total: R$ %.2f\n", y);
        break;
    case 5:
        y *= 1.50;

        printf ("Total: R$ %.2f\n", y);
        break;
    }
 
    return 0;
}