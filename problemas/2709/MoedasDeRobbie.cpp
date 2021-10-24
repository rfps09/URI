#include <iostream>
#include <clocale>
 
using namespace std;
 
int main() {
    int m = 0, v[20], n = 0, i = 0, count = 0;
    long long int soma = 0;
    bool primo;

    setlocale(LC_ALL, "");

    while(scanf("%d", &m) == 1) {
        primo = true;
        for (i = 0; i < m; i++) {
            scanf("%d", &v[i]);
        }

        scanf("%d", &n);

        soma = 0;
        count = 0;
        i = (m-1)-(n*count);
        while (i >= 0) {
            soma += v[i];

            count++;
            i = (m-1)-(n*count);
        }
        
        for (i = 2; i < soma; i++) {
            if (soma % i == 0) {
                primo = false;
                break;
            }
        }
        
        if (primo == false) {
            printf("Bad boy! I’ll hit you.\n");
        }
        else if (primo == true) {
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }
    }

    return 0;
}