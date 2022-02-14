#include <iostream>
#include <vector>
#include <map>
#include <climits>

using namespace std;
using pii = pair<int,int>;

const int MAXN = 401;
const int INF = INT_MAX/2;

int n,r,q;
int x,y,d;
int a,b,k,t;
map<int,vector<int>> graus;
pii temps[MAXN];
pii floyd[MAXN][MAXN][MAXN];

int main() {
    freopen("entrada.txt", "r", stdin);
    freopen("saida.txt", "w", stdout);
    
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    cin >> n >> r;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int l = 1; l <= n; l++){
                if(i != j) {
                    floyd[i][j][l].first = INF;
                    floyd[i][j][l].second = INF;
                }
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cin >> x;
        graus[x].push_back(i);
    }

    map<int,vector<int>>::iterator it;
    int count = 0;
    int rcount = graus.size();

    for(it = graus.begin(); it != graus.end(); it++) {
        count++;
        for(int i = 0; i < it->second.size(); i++) {
            temps[it->second[i]].first = count;
            temps[it->second[i]].second = rcount;
        }
        rcount--;
    }

    for(int i = 0; i < r; i++) {
        cin >> x >> y >> d;
        for(int j = 1; j <= n; j++) {
            floyd[x][y][j].first = d;
            floyd[y][x][j].first = d;
            floyd[x][y][j].second = d;
            floyd[y][x][j].second = d;
        }
    }

    for(int z = 1; z <= n; z++) 
    {
        for(int i = 1; i <= n; i++) 
        {
            for(int j = 1; j <= n; j++) 
            {
                for(int l = 1; l <= graus.size(); l++) 
                {
                    if(temps[z].first <= l) 
                    {
                        if(floyd[i][j][l].first > floyd[i][z][l].first + floyd[z][j][l].first) 
                        floyd[i][j][l].first = floyd[i][z][l].first + floyd[z][j][l].first;
                    }
                    if(temps[z].second <= l) 
                    {
                        if(floyd[i][j][l].second > floyd[i][z][l].second + floyd[z][j][l].second) 
                        floyd[i][j][l].second = floyd[i][z][l].second + floyd[z][j][l].second;
                    }   
                }
            }
        }
    }

    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> a >> b >> k >> t;

        if(t && floyd[a][b][k].second != INF)
            cout << floyd[a][b][k].second << endl;
        else if(!t && floyd[a][b][k].first != INF)
            cout << floyd[a][b][k].first << endl;
        else cout << "-1" << endl;
    }
    
    fclose(stdin);
    fclose(stdout);

    return 0;
}