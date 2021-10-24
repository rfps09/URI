#include <iostream>
 
using namespace std;
 
int main() {
    int x = 0;
    float y = 0.0;

    scanf("%d", &x);
    scanf("%f", &y);

    printf("%.3f km/l\n", x/y);
 
    return 0;
}