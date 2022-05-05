#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAXN = 51;

vector<int> grafinho[MAXN];
int visited[MAXN];
int deep[MAXN];

vector<int> bfs(int l, int p) {
    memset(visited,0,sizeof(visited));
    memset(deep,0,sizeof(deep));
    queue<int> fila;
    fila.push(l);
    deep[l] = 0;
    visited[l] = 1;
    vector<int> ans;

    while(!fila.empty()) {
        l = fila.front();
        for(int i=0; i<grafinho[l].size(); i++) {
            int v = grafinho[l][i];
            if(!visited[v]) {
                visited[v] = 1;
                deep[v] = deep[l]+1;
                if(deep[v] < p) fila.push(v);
                if(deep[v] <= p)ans.push_back(v);
            }
        }
        fila.pop();
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int c=0,e=0,l=0,p=0;
    int x=0,y=0;
    int count=0;

    while(cin >> c >> e >> l >> p && c) {
        count++;
        for(int i=0; i<e; i++) {
            cin >> x >> y;
            grafinho[x].push_back(y);
            grafinho[y].push_back(x);
        }

        vector<int> ans = bfs(l,p);

        sort(ans.begin(), ans.end());

        cout << "Teste " << count << "\n";
        for(int i=0; i<ans.size(); i++) 
            cout << ans[i] << " ";
        cout << "\n\n";

        for(int i=0; i <= c; i++) 
            grafinho[i].clear();
    }

    return 0;
}