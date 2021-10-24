#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int t = 0, m = 0, n = 0;
    string j, p;
    map<string,string> mymap;
    
    cin >> t;
    
    while(t) {
        cin >> m >> n;
        cin.get();
        for(int i = 0; i < m; i++) {
            getline(cin, j);
            getline(cin, p);
            mymap.insert(make_pair(j,p));
        }
        
        for(int i = 0; i < n; i++) {
            cin >> j;
            if(mymap.find(j) != mymap.end()) {
                cout << mymap[j];
            }
            else {
                cout << j;
            }

            while(cin.get() == 32) {
                cin >> j;
                if(mymap.find(j) != mymap.end()) {
                    cout << " " << mymap[j];
                }
                else {
                    cout << " " << j;
                }
            }
            cout << endl;
        }
        
        cout << endl;
        mymap.clear();
        t--;
    }

    return 0;
}
