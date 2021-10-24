#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int d = 0, vf = 0, vg = 0;
    double quadrado = 0, t = 0;

    while (scanf("%d%d%d", &d, &vf, &vg) != EOF) {
        quadrado = sqrt((12.00*12.00)+(d*d));
        t = 12.00 / vf;
        
        if (vg * t >= quadrado) {
            printf("S\n");
        }
        else {
            printf("N\n");
        }
    }

    return 0;
}