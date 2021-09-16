#include <iostream>
 
using namespace std;
 
int main() {
    int h = 0, z = 0, l = 0;
    
    scanf("%d%d%d", &h, &z, &l);
    
    if ( (h < z && z < l) || (l < z && z < h) ) {
        printf("zezinho\n");
    }
    else if ( (h < l && l < z) || (z < l && l < h) ) {
        printf("luisinho\n");
    }
    else if ( (z < h && h < l) || (l < h && h < z) ){
        printf("huguinho\n");
    }
 
    return 0;
}