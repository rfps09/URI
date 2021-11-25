#include <iostream>
 
using namespace std;
 
int main() {
    int n = 0, fib = 0;
    int ant1 = 1, ant2 = 0;
    
    cin >> n;
    
    cout << 0;
    for(int i = 0; i < n-1; i++) {
        ant2 = ant1;
        ant1 = fib;
        fib = ant1 + ant2;
        cout << " " << fib;
    }
    cout << endl;
 
    return 0;
}
