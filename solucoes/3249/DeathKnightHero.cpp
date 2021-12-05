#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int n = 0, count = 0;
    string aux;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> aux;
        int j = 0;
        for(j = 0; j < aux.length()-1; j++) {;
            if(aux[j] == 'C' && aux[j+1] == 'D') break;
        }
        if(j == aux.length()-1) count++;
    }
    
    cout << count << endl;
    
    return 0;
}
