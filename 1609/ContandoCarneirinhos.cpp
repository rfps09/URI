#include <iostream>
#include <algorithm>

using namespace std;
 
int vetor[10000];

int main() {
    int t = 0, n = 0;
    int i = 0, j = 0;
    int count = 1;

    cin >> t;

    for(j = 0; j < t; j++) {
        cin >> n;
        for(i = 0; i < n; i++) {
            cin >> vetor[i];
        }
        
        sort(vetor, vetor+n);
        
        for(i = 0; i < n-1; i++) {
            if(vetor[i] < vetor[i+1])
                count++;
        }
        
        cout << count << endl;

        count = 1;
    }
 
    return 0;
}
