#include <iostream>
 
using namespace std;
 
int main() {
    float number = 0;
    int count = 0;
    
    for(int i = 0; i < 6; i++) {
        scanf("%f", &number);
        if(number > 0) {
            count++;
        }
    }
    
    printf("%d valores positivos\n", count);
 
    return 0;
}
