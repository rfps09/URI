#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    double raio = 0;
    double pi = 3.14159;
    
    scanf("%lf", &raio);
    
    printf("A=%.4lf\n", pi * pow(raio,2));
 
    return 0;
}