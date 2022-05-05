#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n = 0;
    int vetor[50000];
    int sum = -100;
    int ans = -100;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> vetor[i];
    }
    
    for(int i=0; i<n; i++) {
        int v = vetor[i];
        if (sum+v > v)
            sum += v;
        else sum = v;
        ans = sum > ans ? sum : ans;
    }
    
    cout << ans << "\n";
	
    return 0;
}