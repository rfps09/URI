#include <iostream>

using namespace std;

int main() {
    int x1 = 1, y1 = 1, x2 = 1, y2 = 1, diff1 = 1, diff2 = 1;

    while (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0) {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
            break;
        }
        

        diff1 = (x1 - x2);
        if (diff1 < 0) {
            diff1 *= -1;
        }

        diff2 = (y1 - y2);
        if (diff2 < 0) {
            diff2 *= -1;
        }

        if (diff1 != 0 && diff2 != 0 && diff1 - diff2 == 0) {
            printf ("1\n");
        }
        else if ((diff1 != 0 && diff2 == 0) || (diff1 == 0 && diff2 != 0)){
            printf ("1\n");
        }
        else if (diff1 != 0 && diff2 != 0 && diff1 - diff2 != 0) {
            printf ("2\n");
        }
        else if (diff1 == 0 && diff2 == 0){
            printf ("0\n");
        }
    }
    

    return 0;
}