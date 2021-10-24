#include <iostream>

using namespace std;

int main() {
    char num[110];
    
    cin >> num;

    printf("%+.4E\n", atof(num));
  
    return 0;
}
