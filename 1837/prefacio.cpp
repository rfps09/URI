#include <iostream>

using namespace std;

int main (){
    int a = 0, b = 0, q = 0, r = 0;

    scanf("%d%*c%d", &a, &b);

    if (a < 0 && b > 0) {
        q = a / b;
        r = a % b;
        if (r != 0) {
            q = q - 1;
            r = a - (b*q);
        }
    }
        else if ( a < 0  && b < 0) {
        q = a / b;
        r = a % b;
        if (r != 0) {
            q = q + 1;
            r = a - (b*q);
        }
    }
    else {
        q = a / b;
        r = a % b;
    }

    printf("%d %d\n", q, r);

    return 0;
}