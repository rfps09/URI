#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 0, b = 0, c = 0;
    double delta = 0, r1 = 0, r2 = 0;

    scanf("%lf%*c%lf%*c%lf", &a, &b, &c);

    delta = pow(b, 2.0) - 4.0 * a * c;

    if (a != 0 && delta >= 0) {
        r1 = (-b + sqrt(delta)) / (2.0 * a);
        r2 = (-b - sqrt(delta)) / (2.0 * a);

        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);

        return 0;
    }

    printf("Impossivel calcular\n");

    return 0;
}