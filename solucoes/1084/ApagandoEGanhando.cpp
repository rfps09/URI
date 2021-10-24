#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0); 
    
    int n = 0, d = 0, del = 0;
    string num;
    stack<char> pilha;
    stack<char> aux;

    while(cin >> n >> d && n) {
        del = d;
        cin.get();

        getline(cin, num);

        pilha.push(num[0]);

        for(int i = 1; i < n; i++) {
            if(num[i-1] < num[i] && del > 0) {
                pilha.pop();
                del--;
                while(!pilha.empty() && num[i] > pilha.top() && del > 0) {
                    pilha.pop();
                    del--;
                }
            }
            pilha.push(num[i]);
        }
        
        while(!pilha.empty()) {
            aux.push(pilha.top());
            pilha.pop();
        }
        
        for(int i = 0; i < n-d; i++) {
            cout << aux.top();
            aux.pop();
        }
        
        cout << endl; 
    }

    return 0;
}