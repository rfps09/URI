#include <bits/stdc++.h>

using namespace std;
using lli = long long int;
 
lli solve(lli input) {
    double delta = 0.25 - 6.0 * -input;

    return (sqrt(delta) - 0.5)/3.0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    lli c;
    
    cin >> t;

    for(int i=0; i<t; i++) {
        cin >> c;
        cout << solve(c) << "\n";
    }

    return 0;
}