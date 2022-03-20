#include <iostream>
#include <string>
#include <stack>

using namespace std;

const int MAXA = 1e2+1;

int a[MAXA];

int main() {
    int n=0;
    stack<string> pilha;

    cin >> n;

    int vetor[n];

    for(int i=0; i<n; i++)
        cin >> vetor[i];

    for(int i=n-1; i>=0; i--) {
        for(int j=vetor[i]-1; j>0; j--){
            a[j]=vetor[i];
        }
        if(!a[vetor[i]]) pilha.push("*");
        else pilha.push(to_string(a[vetor[i]]));
    }

    for(int i=1; i < n; i++) {
        cout << pilha.top() << " ";
        pilha.pop();
    } cout << pilha.top() << "\n";

    return 0;
}