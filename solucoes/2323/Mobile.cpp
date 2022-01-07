#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAXN = 10e5+1;
vector<int> grafinho[MAXN];
int count;

int dfs(int x) {
    count++;
    
    for(int i = 0; i < grafinho[x].size(); i++) {
        dfs(grafinho[x][i]);
    }
    
    return count;
}

int bfs(int x) {
    int tam = 0, length = -1, val = 0;
    for(int j = 0; j < grafinho[x].size(); j++) {
        tam = dfs(grafinho[x][j]);
        if(tam != length && length != -1) return 1;
        else length = tam;
        count = 0;
    }
    
    for(int i = 0; i < grafinho[x].size(); i++) {
        val = bfs(grafinho[x][i]) == 1 ? 1 : val;
    }

    return val;
}

int main() {
    ios::sync_with_stdio(0);
    int n = 0, i = 0, j = 0;
    int ans = 0;

    cin >> n;

    for(int k = 0; k < n; k++) {
        cin >> i >> j;
        grafinho[j].push_back(i);
    }

    ans = bfs(0);

    ans == 0 ? cout << "bem" << endl : cout << "mal" << endl;

    return 0;
}
