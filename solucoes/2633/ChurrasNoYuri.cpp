#include <iostream>
#include <map>

using namespace std;

int main() {
    int n = 0, validade = 0;
    string carne;
    map<int,string> mymap;
    map<int,string>::iterator it;

    while(cin >> n && n) {
        for(int i = 0; i < n; ++i) {
            cin >> carne >> validade;
            mymap[validade] = carne;
        }
        it = mymap.begin();
        for(int i = 0; i < n-1; ++i) {
            cout << it -> second << " ";
            ++it;
        }
        cout << it -> second << endl;
        mymap.clear();
    }

    return 0;
}
