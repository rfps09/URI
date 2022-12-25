#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    string word;
    string ans;

    while(cin >> word) {
        if(word == "blue")
            ans += "azul";
        else if(word == "red") 
            ans += "vermelho";
        else
            ans += word;

        ans += " ";
    }

    for(int i=0; i<ans.length()-1; i++) {
        cout << ans[i];
    }

    cout << "\n";

    return 0;
}