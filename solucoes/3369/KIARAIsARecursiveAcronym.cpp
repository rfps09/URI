#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n=0;
    string word;
    vector<string> words;
    set<char> letters;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> word;
        words.push_back(word);
        letters.insert(word[0]);
    }

    for(int i=0; i<words.size(); i++) {
        int j;
        for(j=0; j<words[i].size(); j++) {
            if(letters.find(words[i][j]) ==  letters.end()) {
                break;
            }
        }
        if(j == words[i].size()) {
            cout << "Y\n";
            return 0;
        }
    }

    cout << "N\n";

    return 0;
}