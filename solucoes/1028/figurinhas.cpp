#include <iostream>

using namespace std;

int euclides (int f1, int f2) {
        int r = f1%f2;
        int aux = f2;
        int mdc = f1;

        if (r == 0) {
            mdc = f2;
        }

        while (r != 0) {
            r = mdc % aux;
            mdc = aux;
            aux = r;
        }

        return mdc;
}

int main() {
    int i = 0, n = 0, f1 = 0, f2 = 0, troca = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d%d", &f1, &f2);

        if(f1 < f2) {
            troca = f1;
            f1 = f2;
            f2 = troca;
        }
        
        printf("%d\n", euclides(f1, f2));
    }

    return 0;
}