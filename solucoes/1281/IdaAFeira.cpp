#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int n = 0, m = 0, p = 0, quantidade = 0;
    string produto;
    float preco = 0, total = 0;
    map<string, float> mymap;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> m;
        for(int j = 0; j < m; j++) {
            cin >> produto >> preco;
            mymap.insert(make_pair(produto, preco));
        }
        cin >> p;
        for(int j = 0; j < p; j++) {
            cin >> produto >> quantidade;
            if(mymap.find(produto) != mymap.end())
                total += mymap[produto]*quantidade;
        }
        cout << fixed << setprecision(2) << "R$ " << total << endl;
        mymap.clear();
        total = 0;
    }

    return 0;
}
