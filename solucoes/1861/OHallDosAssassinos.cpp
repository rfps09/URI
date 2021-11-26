#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    string s1,s2;
    vector<string> aux;
    map<string, int> mymap;
    
    while(cin >> s1 >> s2) {
        aux.push_back(s2);
        mymap[s1]++;
    }
    
    for(int i = 0; i < aux.size(); i++) {
        if(mymap.find(aux[i]) != mymap.end()) mymap.erase(aux[i]);
    }
    
    cout << "HALL OF MURDERERS" << endl;
    for(auto& x : mymap) {
        cout << x.first << " " << x.second << endl;
    }
    
    return 0;
}
