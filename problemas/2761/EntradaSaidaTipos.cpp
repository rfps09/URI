#include <iostream> 
#include <iomanip>
#include <sstream>
#include <cstring>
 
using namespace std;
 
int main() {
    int a;
    float b;
    char c;
    char d[50];
    char n[50];
    int numInt = 0, numFloat = 0, i = 0;

    stringstream tamanhoInt;
    stringstream tamanhoFloat;

    scanf("%d%*c%f%*c%c%*c%[^\n]", &a,&b,&c,d);

    cout << a << fixed << setprecision(6) << b << c << d << "\n";

    cout << a << "\t" << fixed << setprecision(6) << b << "\t" << c << "\t" << d << "\n";

    tamanhoInt << a;
    numInt = tamanhoInt.str().length();

    if (numInt < 10) {
        for (i = 0; i < 10 - numInt; i++) {
            cout << " ";
        }
        cout << a;
    }
    else{
        cout << a;
    }

    tamanhoFloat << fixed << setprecision(6) << b;
    numFloat = tamanhoFloat.str().length();

    if (numFloat < 10) {
        for (i = 0; i < 10 - numFloat; i++) {
            cout << " ";
        }
        cout << fixed << setprecision(6) << b;
    }
    else{
        cout << fixed << setprecision(6) << b;
    }

    cout << "         " << c;

    if (strlen(d) < 10) {
        for (i = 0; i < 10 - strlen(d); i++) {
            cout << " ";
        }
        cout << d << endl;
    }
    else {
        cout << d << endl;
    }

    return 0;
}