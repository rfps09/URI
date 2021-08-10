#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    float x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0;

    scanf("%f%*c%f", &x1, &y1);
    scanf("%f%*c%f", &x2, &y2);

    printf("%.4f\n", sqrt(( (x2-x1)*(x2-x1) ) + ( (y2-y1)*(y2-y1) )) );
 
    return 0;
}