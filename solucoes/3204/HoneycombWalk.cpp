#include <iostream>
#include <vector>
#include <cmath>
    
using namespace std;
    
const int MAXN = 14+1;
const int MAXG = 1e4;
    
int sum = 2;
vector<int> grafinho[MAXG];
int visited[MAXG][15];
int ans[15];
    
void dfs(int v, int count) {
    if(v == 1) ans[count]++;

    if(count < 10) {
        for(int i = 0; i < grafinho[v].size(); i++) {
            int atual = grafinho[v][i];

            dfs(atual,count+1);
        }
    }
}

int an(int a1, int n, int r) {
    return a1+(n-1)*r;
}
    
int paPlusTwo(int a1, int n, int r) {
    int An = an(a1,n,r);
    return n*(a1+An)/2 + 2;
}
    
int main() {
    freopen("entrada.txt", "r", stdin);
    freopen("saida.txt", "w", stdout);
    
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    //modelando o grafo
    for(int i = 2; i <= 7; i++) {
        grafinho[1].push_back(i);
        grafinho[i].push_back(1);
    }
    //modelando o grafo
    for(int i = 1; i <= 9; i++) {
        int init = sum;
        int q = i;
        int count = -1;
        int up = an(6,i,6);
        sum = paPlusTwo(6,i,6);
    
        for(int j = init; j < sum; j++) {
            if(q%i == 0) {
                count++;
                if(j == init) {
                    int upzada = paPlusTwo(6,i+1,6);
                    grafinho[j].push_back(sum-1);
                    grafinho[j].push_back(j+1);

                    grafinho[j].push_back(upzada-1);
                    grafinho[upzada-1].push_back(j);
                }
                else {
                    if(j == sum-1) {
                        grafinho[j].push_back(init);
                        grafinho[j].push_back(j-1);
                    }
                    else {
                        grafinho[j].push_back(j+1);
                        grafinho[j].push_back(j-1);
                    }
                    
                    grafinho[j].push_back(j+count+up-1);
                    grafinho[j+count+up-1].push_back(j);
                }          
            }
            else {
                if(j == sum-1) grafinho[j].push_back(init);
                else grafinho[j].push_back(j+1);
                
                grafinho[j].push_back(j-1);
            }

            grafinho[j].push_back(j+count+up);
            grafinho[j+count+up].push_back(j);

            grafinho[j].push_back(j+count+up+1);
            grafinho[j+count+up+1].push_back(j);

            q++;
        }
    }

    for(int i = 0; i < MAXG; i++) {
        for(int j = 0; j < 15; j++) {
            visited[i][j] = -1;
        }
    }

    dfs(1,0);

    for(int i = 1; i < 38; i++) {
        cout << "V" << i << ": ";
        for(int j = 0; j < grafinho[i].size(); j++) {
            cout << grafinho[i][j] << " ";
        }
        cout << "\n";
    }
    
    int t = 0;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    
    fclose(stdin);
    fclose(stdout);
    
    return 0;
}