#include <iostream>
 
using namespace std;
 
int main() {
    int m = 0;
    char *mes[][12] = {"January", "February", "March", "April", "May", "June", "July",
    "August", "September", "October", "November", "December"};
    
    scanf("%d", &m);
    
    printf("%s\n", mes[0][m-1]);
 
    return 0;
}
