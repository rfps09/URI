#include <iostream>
#include <stack>

using namespace std;

int isOperator(char c) {
    if(c == '(' || c == ')')
        return 1;
    if(c == '+' || c == '-')
        return 2;
    if(c == '*' || c == '/')
        return 3;
    if(c == '^')
        return 4;

    return 0;
}

string solve(string infixa) {
    string posfixa;
    stack<char> pilha;

    for(int i=0; i < (int)infixa.length(); i++) {
        int prio = isOperator(infixa[i]);

        if(prio > 1) {
            while(!pilha.empty() && isOperator(pilha.top()) >= prio) {
                posfixa.push_back(pilha.top());
                pilha.pop();
            }
            pilha.push(infixa[i]);
        } 
        else if(prio == 1) {
            if(infixa[i] == '(') pilha.push(infixa[i]);
            else {
                while(!pilha.empty()) {
                    if(pilha.top() == '(') {
                        pilha.pop();
                        break;
                    }
                    posfixa.push_back(pilha.top());
                    pilha.pop();
                }
            }
        }
        else posfixa.push_back(infixa[i]);
    }
    while(!pilha.empty()) {
        if(pilha.top() != '(') 
            posfixa.push_back(pilha.top());
        pilha.pop();
    }

    return posfixa;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n=0;

    cin >> n;

    while(n) {
        string infixa;

        cin >> infixa;

        cout << solve(infixa) << endl;

        n--;
    }

    return 0;
}