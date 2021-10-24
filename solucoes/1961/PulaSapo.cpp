#include <iostream>

using namespace std;

int vetor[100];

int main() {
    int p = 0, n = 0;
    int aux = 0, x = 0;
    
    cin >> p >> n;
    
    cin >> vetor[0];
    
    for(int i = 1; i <= n-1; i++) {
        cin >> vetor[i];
        if(abs(vetor[i]-vetor[i-1]) > p) {
            cout << "GAME OVER" << endl;
            return 0;
        }
    }

    cout<< "YOU WIN" << endl;

    return 0;
}
