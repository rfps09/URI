#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int n=0, count=0;
    string aux;
    set<string> myset;
    
    cin >> n;
    cin.get();
    
    for(int i = 0; i < n; i++) {
        cin >> aux;
        myset.insert(aux);
        while(cin.get() != '\n') {
            cin >> aux;
            myset.insert(aux);
        }
        for(auto& x : myset) {
            count++;
            if(count == myset.size()) cout << x << '\n';
            else cout << x << " ";
        }
        count = 0;
        myset.clear();
    }

    return 0;
}
