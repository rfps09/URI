#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int comparerF(pair<int,int> a, pair<int,int> b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}
int comparerS(pair<int,int> a, pair<int,int> b) {
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(0);
    int t = 0, n = 0, k = 0, i = 0, h = 0, w = 0, l = 0;
    vector<pair<int, int>> presentes;
    
    cin >> t;
    
    while(t) {
        cin >> n >> k;
        for(int j = 0; j < n; j++) {
            cin >> i >> h >> w >> l;
            presentes.push_back(make_pair(h*w*l, i));
        }
        
        sort(presentes.begin(), presentes.end(), comparerF);
        sort(presentes.begin(), presentes.begin()+k, comparerS);
        
        cout << presentes[0].second;
        for(int j = 1; j < k; j++) {
            cout << " " << presentes[j].second;
        }
        cout << "\n";
        
        presentes.clear();
        t--;
    }

    return 0;
}
