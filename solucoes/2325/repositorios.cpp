#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int c = 0, n = 0;
    int p = 0, v = 0;
    map<int,int> mymap;
    map<int,int> aux;

    while(cin >> c >> n && c && n) {
        for(int i = 0; i < c; i++) {
            cin >> p >> v;
            mymap.insert(make_pair(p,v));
        }
        
        for(int i = 0; i < n; i++) {
            cin >> p >> v;
            if (aux.find(p) != aux.end()) {
                if(aux[p] < v) aux[p] = v;
            }
            else if(mymap.find(p) != mymap.end()) {
                if (mymap[p] < v) aux.insert(make_pair(p,v));
            }
            else aux.insert(make_pair(p,v));
        }
        
        for(auto& x: aux) {
            cout << x.first << " " << x.second << endl;
        }
    }
    
    return 0;
}
