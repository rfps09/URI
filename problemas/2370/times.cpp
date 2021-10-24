#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int comparer (pair<int, string> a, pair<int, string> b) {
    return a.second < b.second;
}

int main() {
    int n = 0, t = 0;
    string nome;
    int hab = 0;
    int count = 0;
    vector<pair<int, string>> player;
    vector<pair<int, string>> aux;

    cin >> n >> t;
    
    for(int i = 0; i < n; i++) {
        cin >> nome;
        cin.get();
        cin >> hab;
        
        player.push_back(make_pair(hab,nome));
    }
    
    sort(player.rbegin(), player.rend());
    
    for(int i = 0; i < t; i++) {
        count = aux.size();
        
        cout << "Time " << i+1 << endl;
        
        for(int j = 0; j < n; j++) {
            if(j%t==i) aux.push_back(player[j]);
        }
        
        sort(aux.begin()+count, aux.end(), comparer);
        
        for(int j = count; j < aux.size(); j++) {
            cout << aux[j].second << endl;
        }
        cout << endl;
    }
    
    return 0;
}
