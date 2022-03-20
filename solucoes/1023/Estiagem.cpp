#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n=0,count=0;
    int x=0,y=0;
    map<int,int>::iterator it;
    map<int,int>::iterator aux;
    
    while(cin >> n && n) {
        if(count) cout << "\n";
        count++;
        cout << "Cidade# " << count << ":\n";

        map<int,int> mymap;
        double TotalConsumido = 0;
        double TotalPessoas = 0;
        for(int i=0; i<n; i++) {
            cin >> x >> y;
            TotalPessoas += x;
            TotalConsumido += y;
            y /= x;
            mymap[y] += x;
        }

        aux = mymap.begin();
        for(it=mymap.begin(); it!=mymap.end(); it++) {
            cout << it->second << "-";
            cout << it->first;
            aux++;
            if(aux!=mymap.end()) cout << " ";
            else cout << "\n";
        }

        string ConsumoMedio = to_string(TotalConsumido/TotalPessoas);

        cout << "Consumo medio: ";
        for(int i=0; i < ConsumoMedio.length(); i++) {
            if(ConsumoMedio[i] == '.') {
                cout << ConsumoMedio[i];
                cout << ConsumoMedio[i+1];
                cout << ConsumoMedio[i+2];
                break;
            }
            else cout << ConsumoMedio[i];
        }

        cout << " m3.\n";
    }

    return 0;
}