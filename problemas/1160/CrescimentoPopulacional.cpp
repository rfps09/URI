#include <iostream>

using namespace std;

int main () {
    int t = 0, pa = 0, pb = 0, cityA = 0, cityB = 0;
    double g1 = 0, g2 = 0;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d%*c%d%*c%lf%*c%lf", &pa, &pb, &g1, &g2);

        g1 = g1 / 100.00;
        g2 = g2 / 100.00;
        cityA = pa;
        cityB = pb;

        //calculo
        for(int x = 1; x < 101; x++){
            cityA = cityA + (cityA * g1);
            cityB = cityB + (cityB * g2);
      
            if (cityA > cityB) {
                printf("%d anos.\n", x);
                break;
            }
            else if (cityA <= cityB && x == 100) {
                printf("Mais de 1 seculo.\n");
            }
        }
    }

    return 0;
}