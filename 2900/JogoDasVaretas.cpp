#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int c = 0, v = 0;
    int soma = 0, resultado;
    
    while(cin >> n && n) {
        for(int i = 0; i < n; i++) {
            cin >> c >> v;
            
            if(v % 2 == 0) {
                soma+= v;
            }else {
                soma+= (v-1);
            }
        }
        
        resultado = soma / 4;
        
        cout << resultado << endl;
        
        soma = 0;
    }
    cout << endl;
    
    return 0;
}
