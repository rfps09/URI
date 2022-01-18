#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAXN = 50000;

vector<int> grafinho[MAXN];
vector<int> lista;
priority_queue<int, vector<int>, greater<int>> fila;
int grau[MAXN];

int main() {
    ios::sync_with_stdio(0);
    int n = 0, m = 0;
    int a = 0, b = 0;
    
    cin >> n >> m;
    
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        grau[b]++;
        grafinho[a].push_back(b);
    }
    
    for(int i = 0; i < n; i++) 
        if(grau[i] == 0) fila.push(i);
    if(!fila.empty()) {
        lista.push_back(fila.top());
        fila.pop();
    }
    
    int count = 0;
    while(count < lista.size()) {
        int atual = lista[count];
        count++;
        
        for(int i = 0; i < grafinho[atual].size(); i++) {
            int no = grafinho[atual][i];
            grau[no]--;
            if(grau[no] == 0) fila.push(no);
        }
        if(!fila.empty()) {
            lista.push_back(fila.top());
            fila.pop();
        }
    }
    
    if(lista.size() < n) cout << "*" << endl;
    else for(int i = 0; i < lista.size(); i++) {
        cout << lista[i] << endl;
    }
    
    return 0;
}
