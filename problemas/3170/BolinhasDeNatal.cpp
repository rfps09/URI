#include <stdio.h>

using namespace std;

int main() {
    int a = 0, b = 0, diferenca = 0;

    scanf("%d%d", &a, &b);

    diferenca = b / 2 - a;

    if(diferenca > 0) {
        printf("Faltam %d bolinha(s)\n", diferenca);
    }
    else {
        printf("Amelia tem todas bolinhas!\n");
    }

    return 0;
}
