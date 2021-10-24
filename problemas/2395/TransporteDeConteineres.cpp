#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    int x = 0, y = 0, z = 0;
    int resultado = 0;
    
    cin >> a >> b >> c;
    cin >> x >> y >> z;
    
    resultado = (x/a) * (y/b) * (z/c);

    cout<< resultado << endl;

    return 0;
}
