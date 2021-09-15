#include <iostream>
 
using namespace std;
 
int main() {
    int h = 0, z = 0, l = 0;
    
    scanf("%d%d%d", &h, &z, &l);
    
    if (h < z && z < l) {
        printf("zezinho\n");
    }
    else if (h > z && z < l) {
        printf("luisinho\n");
    }
    else if (h < z && z > l){
        printf("huguinho\n");
    }
 
    return 0;
}