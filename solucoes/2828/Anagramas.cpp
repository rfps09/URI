#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll Mod = 1e9+7;

int modInverse(ll A, ll M) {
    ll m0 = M;
    ll y = 0, x = 1;

    while (A > 1) {
        ll q = A / M;
        ll t = M;
        M = A % M;
        A = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0) x += m0;
 
    return x;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll a=1,b=1;
    string word;
    vector<int> letters(26,0);
    
    cin >> word;
    
    for(int i=1; i<=word.length();i++) {
        a = (i*a)%Mod;
        letters[word[i-1]-'a']++;
    }
    
    auto fatMod = [](ll x,ll mod){
        ll ans=1;
        while(x>1) {
            ans = (ans*x)%mod;
            x--;
        }
        return ans;
    };
    
    for(int i=0; i<letters.size(); i++) {
        b = (b*fatMod(letters[i],Mod))%Mod;
    }
    
    ll ans = (a * modInverse(b, Mod)) % Mod;
    
    cout << ans << "\n";

    return 0;
}