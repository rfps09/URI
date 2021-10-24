#include <iostream>
 
using namespace std;
 
int main() {
 
    int a = 0, c = 0, aux = 0, count = 0;
    
    while(cin >> a >> c && a) {
        for(int i = 0; i < c; i++) {
            cin >> aux;
            if(a > aux) {
                count += (a-aux);
            }
            a = aux;
        }
        
        cout << count << endl;
        
        count = 0;
    }
 
    return 0;
}
