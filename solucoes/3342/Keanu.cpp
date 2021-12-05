#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    
    int n = 0, qtc = 0;
    
    cin >> n;
    
    qtc = n * n;
    
    n = ceil(qtc/2.0);

    cout << n << " casas brancas e " << qtc-n << " casas pretas\n";
    
    return 0;
}
