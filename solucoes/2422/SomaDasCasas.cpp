#include <iostream>

using namespace std;

const int MAXN = 1e5+1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n = 0, k = 0;
    int vetor[MAXN];
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> vetor[i];
    }
    
    cin >> k;
    
    int i = 0, j = n-1;
    while (i != j){
        if (vetor[i] + vetor[j] == k) {
            cout << vetor[i] << " " << vetor[j] << "\n";
            break;
        } 
        else if (vetor[i] + vetor[j] > k)
            j-=1;
        else i+=1;
    }
	
    return 0;
}