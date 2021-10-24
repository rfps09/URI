#include <iostream>
 
using namespace std;
 
int main() {
    double renda = 0, imposto = 0;
    
    scanf("%lf", &renda);
    
    if (renda <= 2000) {
        printf("Isento\n");
    }
    else if (renda > 2000 && renda <= 3000) {
        imposto = (renda - 2000) * 0.08;
        printf("R$ %.2lf\n", imposto);
    }
    else if (renda > 3000 && renda <= 4500) {
        imposto = 1000 * 0.08;
        imposto += (renda - 3000) * 0.18;
        printf("R$ %.2lf\n", imposto);
    }
    else if (renda > 4500) {
        imposto = 1000 * 0.08;
        imposto += 1500 * 0.18;
        imposto += (renda - 4500) * 0.28;
        printf("R$ %.2lf\n", imposto);
    }
 
    return 0;
}
