#include <iostream>
#include <stack>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    int n=0, trem=0;
 
    while(cin >> n && n) {
        while(cin >> trem && trem) {
            stack<int> pilha;
            int count = 1;
            bool validacao = true;
            while(count != trem) {
                pilha.push(count);
                count++;
            }
            count++;
            for(int i=1; i < n; i++) {
                cin >> trem;
                if(pilha.empty() || pilha.top() < trem) {
                    while(count < trem) {
                        pilha.push(count);
                        count++;
                    }
                    validacao = validacao == false ? false : trem == count;
                    count++;
                }
                else {
                    if(pilha.top() > trem) validacao = false;
                    else pilha.pop();
                }
            }
            if(validacao == false) cout << "No\n";
            else cout << "Yes\n";
        }
        cout << "\n";
    }
 
    return 0;
}
