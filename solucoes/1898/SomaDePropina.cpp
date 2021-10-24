#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    int i = 0, count = 0, precisao = 0, validacao = 0;
    string linha1;
    string linha2;
    char auxiliar1[61];
    char auxiliar2[61];
    double cpf = 0;
    double desvio = 0;

    cin >> linha1;
    cin >> linha2;
    
    for (i = 0; i < linha1.length(); i++) {
        if ( (linha1[i] >= 48 && linha1[i] <= 57) || linha1[i] == 46 ) {
            auxiliar1[count] = linha1[i];

            if (linha1[i] == 46) {
                precisao = count;
                validacao = 1;
            }
            
            count++;
        }
        if (validacao == 1 && count == precisao+3) {
            count++;
            break;
        }
    }

    count = 0;
    validacao = 0;

    for (i = 0; i < linha2.length(); i++) {
        if ( (linha2[i] >= 48 && linha2[i] <= 57) || linha2[i] == 46 ) {
            auxiliar2[count] = linha2[i];

            if (linha2[i] == 46) {
                precisao = count;
                validacao = 1;
            }
            
            count++;
        }
        if (validacao == 1 && count == precisao+3) {
            count++;
            break;
        }
    }

    linha1 = auxiliar1;
    linha2 = auxiliar2;
    linha2 = linha2.substr(0,count);

    if (linha1.length() > 11) {
        desvio = stod(linha1.substr(11,linha1.length()-11)) + stod(linha2);
    }
    else {
        desvio = stod(linha2);
    }

    cout << "cpf " << linha1.substr(0,11) << endl;
    printf("%.2lf\n", desvio);

    return 0;
}