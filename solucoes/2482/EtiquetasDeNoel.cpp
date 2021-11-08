#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int n = 0, m = 0;
    string idioma, nome, traducao;
    map<string, string> mymap;

    cin >> n;
    cin.get();

    for(int i = 0; i < n; i++) {
        getline(cin, idioma);
        getline(cin, traducao);
        mymap.insert(make_pair(idioma,traducao));
    }

    cin >> m;
    cin.get();

    for(int i = 0; i < m; i++) {
        getline(cin, nome);
        getline(cin, idioma);
        cout << nome << endl;
        cout << mymap[idioma] << endl << endl;
    }

    return 0;
}
