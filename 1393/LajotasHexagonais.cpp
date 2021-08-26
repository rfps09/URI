#include <iostream>
#include <cmath>

using namespace std;

int fibonacci (int numSeq) {
    return round(( pow( ( ( 1+sqrt(5) ) / 2 ), numSeq+1 ) + pow( ( ( 1-sqrt(5) ) / 2 ), numSeq+1 ) ) / sqrt(5));
}

int main() {
    int n = 0;

    while (scanf("%d", &n) && n != 0) {
        printf("%d\n", fibonacci(n));
    }

    return 0;
}