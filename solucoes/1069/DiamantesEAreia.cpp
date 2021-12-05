#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    int n=0, count=0;
    string dinamantes;
    vector<char> dimas;
    
    cin >> n;
    cin.get();
    
    for(int i = 0; i < n; i++) {
        getline(cin, dinamantes);
        for(int j = 0; j < dinamantes.length(); j++) {
            if(dinamantes[j] == '<') dimas.push_back('<');
            else if(dinamantes[j] == '>' && !dimas.empty()) {
                dimas.pop_back();
                count++;
            }
        }
        cout << count << endl;
        count = 0;
        dimas.clear();
    }

    return 0;
}
