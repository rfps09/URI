#include <iostream>
#include <bitset>
#include <string>

using namespace std;
 
int main() {
    int n = 0, i = 0;
    string a, b;
    bitset<1000> A;
    bitset<1000> B;
    bitset<1000> C;

    cin >> n;

    cin >> a;

    cin >> b;

    for (i = 0; i < a.length(); i++) {
        A[i] = a[i] - '0';
    }
    
    for (i = 0; i < b.length(); i++) {
        B[i] = b[i] - '0';
        C[i] = b[i] - '0';
        C[i].flip();
    }

    if (n % 2 == 0) {
        if (A == B) {
            printf("Deletion succeeded\n");
        }
        else {
            printf("Deletion failed\n");
        }
    }
    else {
        if (A == C) {
            printf("Deletion succeeded\n");
        }
        else {
            printf("Deletion failed\n");
        }
    }

    return 0;
}
