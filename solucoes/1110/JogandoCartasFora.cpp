#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int n = 0;
    queue<int> fila;
    
    while(cin >> n && n) {
        for(int i = 1; i <= n; i++) {
            fila.push(i);
        }
        cout << "Discarded cards:";
        if(fila.size() > 1) {    
            cout << " " <<fila.front();
            fila.pop();
        }
        while(fila.size() > 1) {
            fila.push(fila.front());
            fila.pop();
            cout << ", " << fila.front();
            fila.pop();
        }
        
        cout << endl << "Remaining card: " << fila.front() << endl;
        fila.pop();
    }
    
    return 0;
}
