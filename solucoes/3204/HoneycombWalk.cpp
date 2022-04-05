#include <iostream>
#include <vector>
#include <cmath>
    
using namespace std;
    
const int MAXN = 14+1;
const int MAXG = 1e4;
    
int sum = 2;
vector<int> grafinho[MAXG];
int visited[MAXG][15];

int dfs(int v, int count) {
    if(count == 0) return v==1;

    if(visited[v][count] != -1) return visited[v][count];

    int ans = 0;

    for(int i = 0; i < grafinho[v].size(); i++) {
        int atual = grafinho[v][i];

        ans += dfs(atual,count-1);
    }

    visited[v][count] = ans;

    return ans;
}

int an(int a1, int n, int r) {
    return a1+(n-1)*r;
}
    
int paPlusTwo(int a1, int n, int r) {
    int An = an(a1,n,r);
    return n*(a1+An)/2 + 2;
}
    
int main() {
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
    
    int t = 0;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << dfs(1,n) << endl;
    }
    
    return 0;
}