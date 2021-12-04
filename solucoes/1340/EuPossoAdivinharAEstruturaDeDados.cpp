#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

void clear(queue<int> &q) {
   queue<int> empty;
   swap(q, empty);
}
void clear(stack<int> &q) {
   stack<int> empty;
   swap(q, empty);
}
void clear(priority_queue<int> &q) {
   priority_queue<int> empty;
   swap(q, empty);
}

int main() {
    ios::sync_with_stdio(0);

    int n = 0, c = 0, x = 0;
    int f = 0, pf = 0, p = 0;
    int vf = 0, vpf = 0, vp = 0;
    stack<int> pilha;
    queue<int> fila;
    priority_queue<int> fila_de_prioridade;
    
    while(cin >> n) {
        for(int i = 0; i < n; i++) {
            cin >> c >> x;
            if(c == 1) {
                fila_de_prioridade.push(x);
                fila.push(x);
                pilha.push(x);
            }
            else {
                f = fila.front(); 
                p = pilha.top();
                pf = fila_de_prioridade.top();
                
                if(f == x && vf == 0) vf = 0;
                else vf = 1;
                
                if(pf == x && vpf == 0) vpf = 0;
                else vpf = 1;
                
                if(p == x && vp == 0) vp = 0;
                else vp = 1;
                
                fila.pop();
                fila_de_prioridade.pop();
                pilha.pop();
            }
        }
        
        if(vf == 0 && vpf == 1 && vp == 1) cout << "queue" << endl;
        else if(vf == 1 && vpf == 0 && vp == 1) cout << "priority queue" << endl;
        else if(vf == 1 && vpf == 1 && vp == 0) cout << "stack" << endl;
        else if(vf == 1 && vpf == 1 && vp == 1) cout << "impossible" << endl;
        else cout << "not sure" << endl;
        
        clear(pilha);
        clear(fila);
        clear(fila_de_prioridade);
        vf = 0, vpf = 0, vp = 0;
    }

    return 0;
}
