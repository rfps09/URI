#include <iostream>

using namespace std;

const int MAXN = 1000;

char grafinho[MAXN][MAXN];

int main() {
    ios::sync_with_stdio(0);
    int m = 0, n = 0, count = 0;
    char aux;
    
    cin >> m >> n;
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> aux;
            grafinho[i][j] = aux;
        }
    }
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(grafinho[i][j] == '#') {
                if(i > 0 && i < m-1 && j > 0 && j < n-1) {
                    if(grafinho[i-1][j] == '.') count++;
                    else if(grafinho[i][j-1] == '.') count++;
                    else if(grafinho[i][j+1] == '.') count++;
                    else if(grafinho[i+1][j] == '.') count++;
                } else {
                    count++;
                }
            }
        }
    }
    
    cout << count << endl;

    return 0;
}
