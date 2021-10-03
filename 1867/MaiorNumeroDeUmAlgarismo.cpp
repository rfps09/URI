#include <iostream>
 
using namespace std;
 
int main() {
    string n, m;
    int a = 0, b = 0, modA = 0, modB = 0;
    int i = 0;
    
    while(cin >> n && cin.get() && cin >> m && cin.get()) {
        if(n.length() == 1 && n == "0" && n.length() == 1 && m == "0") {
            break;
        }
        
        for(i = 0; i < n.length(); i++) {
            a += n[i]-'0';
        }
        for(i = 0; i < m.length(); i++) {
            b += m[i]-'0';
        }
        
        modA = (a%9 == 0 && a != 0) ? 9 : a%9;
        modB = (b%9 == 0 && b != 0) ? 9 : b%9;
        
        if(modA > modB) {
            cout << "1" << endl;
        }
        else if( modA < modB) {
            cout << "2" << endl;
        }
        else{
            cout << "0" << endl;
        }
        
        a = 0;
        b = 0;
    }
 
    return 0;
}
