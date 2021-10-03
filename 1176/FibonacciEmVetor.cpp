#include <iostream>

using namespace std;

long long int fibVetor[61];
int count = 2;

long long int fib(int n) {
    if(n >= count) {
        for(count = count; count <= n; count++) {
            fibVetor[count] = fibVetor[count-1] + fibVetor[count-2];
        }
    }
    
    return fibVetor[n];
}

int main() {
    int n = 0, x = 0;
    int i = 0;
    
    
    fibVetor[0] = 0;
    fibVetor[1] = 1;

    cin >> n;
    
    for(i = 0; i < n; i++) {
        cin >> x;
        cout << "Fib(" << x << ") = " << fib(x) << endl;
    }
    
    return 0;
}
