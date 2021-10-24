#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double v = 0, h = 0, m = 0, s = 0, km = 0, count = 0;
    double tempoInicial = 0, tempoFinal = 0, tempo = 0;
    char teste;

    while (scanf("%lf%*c%lf%*c%lf%c", &h, &m, &s, &teste) != EOF) {
        if (count == 0) {
            tempoInicial = (h*60*60) + (m*60) + s;
        }
        
        tempoFinal = (h*60*60) + (m*60) + s;
        tempo =  (tempoFinal - tempoInicial) / 3600;

        if (teste != '\n') {
            km += tempo * v;
            scanf("%lf", &v);
        }
        else {
            km += tempo * v;
            printf("%02.0lf:%02.0lf:%02.0lf %.2lf km\n", h,m,s,km);
        }

        tempoInicial = tempoFinal;
        count = 1;
    }

    return 0;
}