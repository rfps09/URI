#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n=0, count=1;
    
    while(cin >> n && n) {
        cout << "Teste " << count << "\n"; 
        
        int sum = 0;
        int maior = 0;
        int left = 1;
        int right = 1;
        int leftMaior = 1;
        int rightMaior = 1;
        int teste = 0;

        for(int i = 1; i <= n; i++) {
            int x=0,y=0;
            cin >> x >> y;
            int saldo = x - y;
            if(sum+saldo >= saldo) {
                sum += saldo;
                right = i;
            }
            else {
                sum = saldo;
                left = i;
                right = i;
            }
            
            if(sum > maior || (sum == maior && (right-left) >= (rightMaior-leftMaior))) {
                maior = sum;
                leftMaior = left;
                rightMaior = right;
            }
        }

        if(maior == 0) cout << "nenhum\n\n";
        else cout << leftMaior << " " << rightMaior << "\n\n";
        count++;
    }
	
    return 0;
}