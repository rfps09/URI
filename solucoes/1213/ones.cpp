#include <iostream>

using namespace std;

int mod(int n) {
    int count = 1;
    int multi = (0 + (1%n))%n;

    while(multi != 0) {
        multi = ( (multi%n) * (10%n) )%n;
        multi = ( (multi%n) + 1 )%n;
        count++;
    }

    return count;
}

int main () {
    int n = 0, count = 0;

    while(cin >> n){
        count  = mod(n);
        cout << count << endl;
    }

    return 0;
}