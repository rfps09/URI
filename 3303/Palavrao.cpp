#include <iostream>
#include <string.h>
 
using namespace std;
 
int main() {
    char palavra[20];
    
    scanf("%s", palavra);
    
    if(strlen(palavra) >= 10){
        printf("palavrao\n");
    }
    else {
        printf("palavrinha\n");
    }
 
    return 0;
}
