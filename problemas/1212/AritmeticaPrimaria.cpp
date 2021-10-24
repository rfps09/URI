#include <iostream>

using namespace std;

int main () {
    long long int a = 0;
    long long int b = 0;
    int count = 0, carry = 0, x = 0, y = 0;
    
    while(cin >> a >> b && (a || b)) {
        while(a != 0 || b != 0) {
            x = a % 10;
            y = b % 10;
            if(x + y + carry > 9) {
                count++;
                carry = 1;
            }
            else carry = 0;
            a /= 10;
            b /= 10;
        }

        if(count > 1) cout << count << " carry operations.\n";
        else if(count == 1) cout << count << " carry operation.\n";
        else cout << "No carry operation.\n";

        count = 0;
        carry = 0;
    }

    return 0;
}
