#include <iostream>
#include <algorithm>

using namespace std;

int vetor[1000];

int comparer (int a, int b) {
    return a>b;
}

int main() {
    int n = 0, k = 0;
    int count = 0, aux = 0;
    
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        cin >> vetor[i];
    }
    
    sort(vetor, vetor+n, comparer);
    
    while(vetor[k-1] == vetor[k]) {
        k++;
    }

    cout<< k << endl;

    return 0;
}
