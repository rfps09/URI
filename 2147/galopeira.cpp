#include <iostream>
#include <string.h>

using namespace std;
 
int main() {
    int c = 0;
    char palavra[10001];
    
    scanf("%d", &c);
    
    for(int i = 0; i < c; i++) {
        setbuf(stdin,NULL);
        scanf("%s", palavra);
        printf("%.2f\n",strlen(palavra) * 0.01);
    }
 
    return 0;
}
