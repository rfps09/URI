#include <iostream>
 
using namespace std;
 
int main() {
    float a = 0, b = 0, c = 0, media = 0;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    media =  (a*2.0 + b*3.0 + c*5.0) / 10;

    printf("MEDIA = %.1f\n", media);

    return 0;
}