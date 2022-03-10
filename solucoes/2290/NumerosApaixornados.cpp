#include <iostream>
#include <map>

using namespace std;
using ll = long long int;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n,count;
    ll a;
    map<ll,int> paixao;
    map<ll,int>::iterator it;

    while(cin >> n && n) {
        count = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> a;
            paixao[a]++;
        }

        for(it = paixao.begin(); it != paixao.end(); it++){
            if(it->second%2) {
                if(count) break;
                count++;
                cout << it->first;
            }
        } cout << " " << it->first <<"\n";
        
        paixao.clear();
    }

    return 0;
}