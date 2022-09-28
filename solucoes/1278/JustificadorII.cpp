#include <bits/stdc++.h>

using namespace std;

string killSpace(string toKill) {
    string killed = "";

    for(int i=0; i<toKill.length(); i++) {
        if(toKill[i] != ' ') 
            killed += toKill[i];
        else if((i<toKill.length()-1 && killed.length() != 0)&& toKill[i+1] != ' ') 
            killed += toKill[i];
    }

    return killed;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    char end;
    bool novalinha = 0;

    while(cin >> n && n) {
        if(novalinha) cout << '\n';
        cin.get();
        
        string linhas[n];
        int maxLen = 0;

        for(int i=0; i<n; i++) {
            getline(cin,linhas[i]);
            linhas[i] = killSpace(linhas[i]);
            maxLen = max((int)linhas[i].length(),maxLen);
        }

        for(int i=0; i<n; i++) {
            int len = maxLen - linhas[i].length();
            for(int j=0; j<len; j++) {
                cout << ' ';
            }   cout << linhas[i] << '\n';
        }
        novalinha = 1;
    }

    return 0;
}