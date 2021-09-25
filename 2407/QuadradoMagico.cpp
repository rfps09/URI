#include <iostream>

using namespace std;

using ull = unsigned long long int;

ull sumR[1000], sumC[1000], sumD[2], sumN[1000000];

int main () {
    int total = 0;
	int x = 0, n = 0, i = 0, j = 0, y = 0;
	
	cin >> n;

    total = n*n;
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			cin >> x;
            if(sumN[x] == 0 && x <= total) {
                sumN[x] = x;
            }
            else {
                cout << "0" << endl;
			    return 0;
            }
			sumR[i] += x;
			sumC[j] += x;
			if(i == j) {
				sumD[0] += x;	
			}
			if( (n-1) - i == j ) {
				sumD[1] += x;	
			}
		}
		if (i > 0 && sumR[i] != sumR[i-1]) {
			cout << "0" << endl;
			return 0;
		}
	}
	
	if(sumD[0] != sumD[1] || sumD[0] != sumR[0] || sumR[0] != sumC[0]) {
		cout << "0" << endl;
		return 0;
	}

	for(i = 0; i < n-1; i++) {
		if(sumC[i] != sumC[i+1]) {
			cout << "0" << endl;
			return 0;
		}
	}	
	
	cout << sumD[1] << endl;
	
	return 0;
}
