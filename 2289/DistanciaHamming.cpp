#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned long long int x = 0, y = 0, resultado = 0;
    
    while(cin >> x >> y && (x || y)) {
        resultado = x ^ y;
        
        bitset<64> binary(resultado);
        
        cout << binary.count() << endl;
    }
    
    return 0;
}
