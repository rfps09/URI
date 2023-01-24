#include <iostream>

using namespace std;

using pii = pair<int,int>;

int main() {
    int n;
    int n1,d1;
    int n2,d2;
    char op;
    char carac;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> n1 >> carac >> d1 >> op >> n2 >> carac >> d2;
        
        int num = 0;
        int den = 0;
        
        if(op == '+') {
            num = n1*d2 + n2*d1;
            den = d1*d2;
        }
        else if(op == '-') {
            num = n1*d2 - n2*d1;
            den = d1*d2;
        }
        else if(op == '*') {
            num = n1*n2;
            den = d1*d2;
        }
        else if(op == '/') {
            num = n1*d2;
            den = n2*d1;
        }
        
        pii ans = {num,den};
        
        int d=2;
        while(d <= min(abs(ans.first),abs(ans.second))) {
            if(!(ans.first%d) && !(ans.second%d)) {
                ans.first /= d;
                ans.second /= d;
                d = 1;
            }
            d++;
        }
        
        cout << num << "/" << den << " = " << ans.first << "/" << ans.second << "\n";
    }

    return 0;
}