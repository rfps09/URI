#include <iostream>

using namespace std;

int vetor[100];

int main() {
    int n = 0, m = 0, p = 0, d = 0;
    int mod = 0;
    
    cin >> n >> m;
    
    for(int i = 0; i < m; i++) {
        cin >> p >> d;
        mod = p - 1;
        vetor[mod] = 1;
        while(mod < n-d) {
            mod += d;
            vetor[mod] = 1;
        }
        mod = p - 1;
        while(mod >= d) {
            mod -= d;
            vetor[mod] = 1;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << vetor[i] << endl;
        vetor[i] = 0;
    }
    
    return 0;
}
