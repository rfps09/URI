#include <iostream>
#include <vector>
 
using namespace std;
 
int main () {
    ios::sync_with_stdio(0); 
    
    vector<long long int> pilha;
    vector<long long int> aux;
    int n = 0;
    long long int menor = 1000000000;
    long long int v = 0;
    string op;
 
    cin >> n;
 
    for(int i = 0; i < n; i++) {
        cin >> op;
        cin.get();
 
        if(op == "PUSH") {
            cin >> v;
            cin.get();
            pilha.push_back(v);
            if(v < menor) menor = v;
            aux.push_back(menor);
        }
        else if(op == "POP") {
            if(!pilha.empty()) {
                pilha.pop_back();
                aux.pop_back();
                if(!pilha.empty()) menor = aux.back();
                else menor = 1000000000;
            }
            else {
                menor = 1000000000; 
                cout << "EMPTY" << endl;
            }
        }
        else if(op == "MIN") {
            if(!aux.empty()) cout << aux.back() << endl;
            else cout << "EMPTY" << endl;
        }
    }
 
    return 0;
}
