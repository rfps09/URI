#include <bits/stdc++.h>

using namespace std;

class road {
public:
    int z;
    int x;
    int y;
    
    road(int x,int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    
    static bool comparer(road A, road B) {
        return A.z < B.z;
    }
};

const int MAXN = 2e5;

int pai[MAXN];
int len[MAXN];

int find(int x) {
    if(x != pai[x])
        pai[x] = find(pai[x]);
    return pai[x];
}

void join(int a, int b) {
    int PaiDeA = find(a);
    int PaiDeB = find(b);
    
    if(len[a] > len[b]) {
        pai[PaiDeB] = PaiDeA;
        len[PaiDeA]+=len[PaiDeB];
    }
    else {
        pai[PaiDeA] = PaiDeB;
        len[PaiDeB]+=len[PaiDeA];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n,m;
    int x,y,z;
    
    while(cin >> n >> m && n) {
        vector<road> estradas;
        
        for(int i=0; i<=n; i++) {
            pai[i] = i;
            len[i] = 1;
        }
        
        for(int i=0; i<m; i++) {
            cin >> x >> y >> z;
            
            estradas.push_back(road(x,y,z));
        }
        
        sort(estradas.begin(), estradas.end(), road::comparer);
        
        int ans = 0;
        
        for(int i=0; i<m; i++) {
            road atual = estradas[i];
            if(find(atual.x) != find(atual.y))
                join(atual.x, atual.y);
            else ans += atual.z;
        }
        
        cout << ans << "\n";
    }

    return 0;
}