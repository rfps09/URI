#include <iostream>
#include <string>

using namespace std;

void troca(int &a, int &b) {
    a += b;
    b = a-b;
    a -= b;
}

string solve(int left, int right) {
    if(left < right) troca(left,right);
    
    if(right == 1) return "1";
    
    int movLeft=1,movRight=1,movNew=0;
    int mod = 0;
    
    while(mod != 1) {
        movNew = left/right * movRight + movLeft;
        
        mod = left%right;
        
        left = right;
        right = mod;
        
        movLeft = movRight;
        movRight = movNew;
        
        if(mod == 0) return "IMPOSSIVEL";
    }
    
    return to_string(movNew);
}

int main() {
    int e = 0, d = 0;
    
    cin >> e >> d;
    
    cout << solve(e,d) << "\n";

    return 0;
}