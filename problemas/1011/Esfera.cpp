#include <iostream>
 
using namespace std;
 
int main() {
    float raio = 0.0;
    double pi = 3.14159;
 
    scanf("%f", &raio);
    
    printf("VOLUME = %.3lf\n", ( (4.0/3) * pi * raio * raio * raio));
 
    return 0;
}