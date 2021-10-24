#include <iostream>
#include <string>

using namespace std;

int main () {
	int i = 0, count = 0;
	string rs, rsAux;
	
	getline(cin, rs);
	
	for(i = 0; i < rs.length(); i++) {
		switch(rs[i]) {
			case 'a':
				rsAux += rs[i];
				count++;
			break;
				
			case 'e':
				rsAux += rs[i];
				count++;
			break;
				
			case 'i':
				rsAux += rs[i];
				count++;
			break;
				
			case 'o':
				rsAux += rs[i];
				count++;
			break;
				
			case 'u':
				rsAux += rs[i];
				count++;
			break;
		}
	}
	
	count--;
	
	for(i = 0; i <= count; i++) {
		if(rsAux[i] != rsAux[count-i]) {
			cout << "N" << endl;
			
			return 0;
		}
	}

	cout << "S" << endl;
	
	return 0;
}
