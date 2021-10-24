#include <iostream>
#include <string>

using namespace std;

int consoanteComparer (char x) {
    int validacao = 1;
    char consoante[] = {'a','e','i','o','u'};

    for (int i = 0; i < 5; i++) {
        if (x == consoante[i]) {
            validacao = 0;
            break;
        }
    }

    return validacao;
}

int main() {
    string palavraChave;
    int n = 0;
    int i = 0, count = 0, x = 0, y = 0;
    int xis = 0, ipisilon = 0;
    int consoante = 1;
    string mensagem;
    char cesar[26][26];

    for (x = 0; x < 26; x++) {
        for (y = 0; y < 26; y++) {
            if (x + 1 <= 26 - y) {
                cesar[x][y] = x+y+97;
            }
            else {
                cesar[x][y] = 97+ x + y - 26;
            }
        }
    }

    getline(cin, palavraChave);
    cin >> n;
    cin.get();

    for (x = 0; x < n; x++) {
        getline(cin, mensagem);

        consoante = consoanteComparer(mensagem[0]);
        count = 0;

        for (y = 0; y < mensagem.length(); y++) {
            if (mensagem[y] != ' ' && consoante == 1) {
                xis = (int)palavraChave[count] - 97;
                ipisilon = (int)mensagem[y] - 97;

                count++;
                if (count == palavraChave.length()) {
                    count = 0;
                }

                printf("%c",cesar[xis][ipisilon]);
            }
            else if (mensagem[y] != ' ' && consoante == 0) {
                printf("%c", mensagem[y]);
            }
            else if (mensagem[y] == ' ') {
                printf("%c", mensagem[y]);
                if (y+1 < mensagem.length()) {
                    consoante = consoanteComparer(mensagem[y+1]);
                }
            }
        }

        printf("\n");
    }

    return 0;
}   