#include <iostream>

using namespace std;

int main() {
    int n = 0, i = 0;
    int aX = 0, aY = 0, cX = 0, cY = 0, rX = 0, rY = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d%d%*d%*d%d%d%*d%*d%d%d", &aX, &aY, &cX, &cY, &rX, &rY);

        if (rX >= aX && rX <= cX && rY >= aY && rY <= cY){
            printf("1\n");
        }
        else {
            printf("0\n");
        }
    }

    return 0;
}