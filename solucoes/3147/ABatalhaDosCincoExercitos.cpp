#include <iostream>

using namespace std;

int main() {
    int h = 0, e = 0, a = 0, o = 0, w = 0, x = 0;

    scanf("%d%d%d%d%d%d", &h, &e, &a, &o, &w, &x);

    if (h+e+a+x >= o+w) {
        printf("Middle-earth is safe.\n");
    }
    else {
        printf("Sauron has returned.\n");
    }

    return 0;
}
