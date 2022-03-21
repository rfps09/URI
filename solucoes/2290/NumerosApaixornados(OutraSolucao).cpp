#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n=0;
    
    while(cin >> n && n) {
        long long int vetor[n];
        
        for(int i=0; i<n; i++)
            cin >> vetor[i];
    
        sort(vetor,vetor+n);
        
        int i,count = 0;
        for(i=0; i<n-1; i++) {
            if(vetor[i] == vetor[i+1]) i++;
            else {
                if(count) break;
                cout << vetor[i] << " ";
                count++;
            }
        }
        cout << vetor[i] << "\n";
    }

    return 0;
}
