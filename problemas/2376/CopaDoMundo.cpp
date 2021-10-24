#include <iostream>
#include <queue>

using namespace std;

int main() {
    int a = 0, b = 0;
    queue<int> fila;
    char resultado;
    
    for(int i = 0; i < 16; i++) {
        fila.push(i);
    }

    for(int i = 0; i < 15; i ++) {
        cin >> a >> b;
        if(a > b) {
            fila.push(fila.front());
            fila.pop();
        }
        else {
            fila.pop();
            fila.push(fila.front());
        }
        fila.pop();
    }

    resultado = 'A' + fila.front();
    
    cout<< resultado << endl;
    
    return 0;
}