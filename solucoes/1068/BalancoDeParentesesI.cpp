#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    string exp;

    while(cin >> exp) {
        stack<int> pilha;
        
        for(int i=0; i<exp.length(); i++) {
            if(exp[i] == '(') {
                pilha.push('(');
            }
            else if(exp[i] == ')') {
                if(!pilha.empty() && pilha.top() == '(')
                    pilha.pop();
                else
                    pilha.push(')');
            }
        }

        if(pilha.empty() && exp.length())
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }

    return 0;
}