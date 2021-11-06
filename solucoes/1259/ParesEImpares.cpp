#include <iostream>
#include <vector>
#include <queue>
#include <functional>
 
using namespace std;
 
int main() {
    int n = 0, aux = 0;
    priority_queue<int, vector<int>, greater<int>> filaPar;
    priority_queue<int> filaImpar;
 
    cin >> n;
 
    for(int i = 0; i < n; i++) {
        cin >> aux;
        if(aux % 2 == 0) filaPar.push(aux);
        else filaImpar.push(aux);
    }
 
    while(!filaPar.empty()) {
        cout << filaPar.top() << endl;
        filaPar.pop();
    }
 
    while(!filaImpar.empty()) {
        cout << filaImpar.top() << endl;
        filaImpar.pop();
    }
 
    return 0;
}
