#include <iostream>
#include <algorithm>
 
using namespace std;
 
const int MAXN = 101;
pair<int,int> trafego[MAXN];
 
int main() {
    int a = 0, v = 0;
    int x = 0, y = 0;
    int max = 0, count = 1, i = 0;
    
    while(cin >> a >> v && a && v) {
        for(i = 0; i < v; i++) {
            cin >> x >> y;
            trafego[x].first++;
            trafego[x].second = x;
            trafego[y].first++;
            trafego[y].second = y;
        }
 
        sort(trafego+1, trafego+a+1);
        
        max = trafego[a].first;
        
        cout << "Teste " << count << endl;
        for(int i = 1; i <= a; i++) {
            if(trafego[i].first == max)
                cout << trafego[i].second << " " ;
        }
        cout << "\n\n";
        count++;
        
        for(i = 0; i <= a; i++) {
            trafego[i].first=0;
            trafego[i].second=0;
            trafego[i].first=0;
            trafego[i].second=0;
        }
    }
 
    return 0;
}
