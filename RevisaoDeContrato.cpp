#include <iostream>
#include <string>

using namespace std;

int main() {
    string vetor;
    string vetorAux;
    char digito;
    int resultado = 0, count = 0;
    
    while(cin >> digito && cin.get() && getline(cin, vetor)) {
        if(vetor == "0" &&  digito == '0') {
            break;
        }
        
        for(int i = 0; i < vetor.length(); i++) {
            if(vetor[i] != digito) {
                vetorAux += vetor[i];
            }
        }
        
        for(int i = 0; i < vetorAux.length(); i++) {
            if(vetorAux[i] == '0') {
                count++;
            }
            else {
                break;
            }
        }
        
        if(count < vetorAux.length()) {
            vetorAux = vetorAux.substr(count,vetorAux.length() - count);
        }
        
        if(vetorAux.length() > 0 && count != vetorAux.length()) {
            cout << vetorAux << endl;
        }
        else {
            cout << 0 << endl;
        }
        vetorAux = "";
        count = 0;
    }
    
    return 0;
}
