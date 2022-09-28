#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    string word_1, word_2;

    while(getline(cin,word_1)) {
        getline(cin,word_2);

        int ans = 0;
        int i=0, i_aux=0;

        while(i < word_1.length()) {
            int count=0;
            i_aux=i;

            for(int j=0; j<word_2.length(); j++) {
                if(word_1[i_aux] == word_2[j]) {
                    i_aux++;
                    count++;
                    ans = max(count,ans);
                }
                else {
                    i_aux = i;
                    count = 0;
                }
            }

            i++;
        }

        cout << ans << "\n";
    }

    return 0;
}