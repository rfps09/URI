#include <iostream>
#include <stack>

using namespace std;

int main() {
    int t = 0;
    int validacao = 0;
    string cadeia;
    stack<char> pilha;
    
    cin >> t;
    cin.get();
    
    for(int j = 0; j < t; j++) {
        getline(cin, cadeia);
        
        for(int i = 0; i < cadeia.length(); i++) {
            if(cadeia[i] == '(' || cadeia[i] == '[' || cadeia[i] == '{') {
                pilha.push(cadeia[i]);
            }
            else {
                if(!pilha.empty() && (pilha.top() == cadeia[i] - 1 || pilha.top() == cadeia[i] - 2)) {
                    pilha.pop();
                }
                else {
                    pilha.push(cadeia[i]);
                    break;
                }
            }
        }
        
        if(pilha.empty()) {
            cout << "S" << endl;
        }
        else {
            cout << "N" << endl;
            while(!pilha.empty()) {
                pilha.pop();
            }
        }
    }
    
    return 0;
}
