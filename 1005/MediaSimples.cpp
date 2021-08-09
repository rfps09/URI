#include <iostream>
 
using namespace std;
 
int main() {
    float a = 0, b = 0, media = 0;

    scanf("%f", &a);
    scanf("%f", &b);

    media =  (a*3.5 + b*7.5) / 11;

    printf("MEDIA = %.5f\n", media);

    return 0;
}