#include <iostream>

using namespace std;

int main () {
    int hora1 = 0, minuto1 = 0, segundo1 = 0;
    int dia1;

    int hora2 = 0, minuto2 = 0, segundo2 = 0;
    int dia2;

    int w,x,y,z;

    scanf("%*s%d", &dia1);
    scanf("%d%*c%*c%d%*c%*c%d", &hora1, &minuto1, &segundo1);
    scanf("%*s%d", &dia2);
    scanf("%d%*c%*c%d%*c%*c%d", &hora2, &minuto2, &segundo2);

    z = segundo2 + (60 - segundo1);
    if (z >= 60) {
        y = minuto2 + (60 - minuto1);
        z -= 60;
    }
    else {
        y = minuto2 + (60 - minuto1) - 1;
    }

    if (y >= 60) {
        x = hora2 + (24 - hora1);
        y -= 60;
    }
    else {
        x = hora2 + (24 - hora1) - 1;
    }

    if (x >= 24) {
        w = dia2 - dia1;
        x -= 24;
    }
    else {
        w = dia2 - dia1 - 1;
    }
    
    printf("%d dia(s)\n", w);
    printf("%d hora(s)\n", x);
    printf("%d minuto(s)\n", y);
    printf("%d segundo(s)\n", z);

    return 0;
}