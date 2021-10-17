#include <iostream>

using namespace std;

int count = 0;

int fib(int x) {
    count++;
    return x < 3 ? 1 : fib(x-1) + fib(x-2);
}

int main() {
    int t = 0, n = 0;
    int resultado = 0;
    
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cin >> n;
        
        resultado = fib(n+1);
        
        cout << "fib(" << n << ") = " << count-1 << " calls = " << fib(n) << endl;
        
        count = 0;
    }
    
    return 0;
}
