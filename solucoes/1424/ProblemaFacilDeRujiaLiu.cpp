#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n = 0, m = 0, k = 0, v = 0;
    map<int, vector<int>> mymap;
    int number = 0;
 
    while(cin >> n >> m) {
        for(int i = 0; i < n; i++) {
            cin >> number;
            mymap[number].push_back(i+1);
        }
 
        for(int i = 0; i < m; i++) {
            cin >> k >> v;
            if(mymap.find(v) != mymap.end()) {
                if(mymap[v].size() >= k) {
                    cout << mymap[v].at(k-1) << endl; 
                }
                else cout << 0 << endl;
            }
            else cout << 0 << endl;
        }
        mymap.clear();
    }
    return 0;
}
