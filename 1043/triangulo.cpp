#include <iostream>
 
using namespace std;
 
int main() {
    float a = 0, b = 0, c = 0;

    scanf("%f%*c%f%*c%f", &a, &b, &c);

    if(a < b + c && b < a + c && c < a + b){
        printf("Perimetro = %.1f", a + b + c);
    }   
    else{
        printf("Area = %.1f", (a + b) * c / 2);
    }

    return 0;
}