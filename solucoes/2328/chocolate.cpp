#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int resultado = 0, aux = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> aux;
        resultado += aux;
    }
    
    resultado = resultado - n;
    
    cout << resultado << endl;
    
    return 0;
}
