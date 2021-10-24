#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int n = 0;
    int resultado = 0;
    
    while(cin >> n && n){
        resultado = log2(n);
        
        cout << resultado << endl;
    }
 
    return 0;
}
