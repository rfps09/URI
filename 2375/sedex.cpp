#include <iostream>
 
using namespace std;
 
int main() {
    int i = 0, validacao = 0;
    int n = 0, x[3];
    
    cin >> n;
    
    cin >> x[0] >> x[1] >> x[2];
    
    for(i = 0; i < 3; i++) {
        if(n > x[i]) {
            validacao = 1;
            break;
        }
    }
    
    if(validacao == 0) {
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
 
    return 0;
}
