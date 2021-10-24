#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int c = 0, i = 0;
    int *n, *m;
    double resultado = 0;

    scanf("%d", &c);

    n = (int *)malloc(c*sizeof(int));
    m = (int *)malloc(c*sizeof(int));

    for (i = 0; i < c; i++) {
        scanf("%d%*c%d", &n[i], &m[i]);
        resultado = floor(log10(n[i]) * m[i]) + 1;
        cout << fixed << setprecision(0) << resultado << endl;
    }
    
    free(n);
    free(m);
    return 0;
}