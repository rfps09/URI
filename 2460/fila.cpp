#include <iostream>
#include <vector>

using namespace std;

int main () {
	int i = 0, aux = 0, tam = 0;
	int n = 0, m = 0;
	vector<int> vetorN;
	vector<int> vetorM;
	
	cin >> n;
	
	for(i = 0; i < n; i++) {
		cin >> aux;
		vetorN.push_back(aux);
	}
	
	cin >> m;
	
	for(i = 0; i < m; i++) {
		cin >> aux;
		vetorM.push_back(aux);
	}
	
	while(!vetorM.empty()) {
		for(i = 0; i < vetorN.size(); i++) {
			if(vetorN.at(i) == vetorM.at(0)) {
			    vetorN.erase(vetorN.begin()+i);
			    vetorM.erase(vetorM.begin());
			    break;
			}
		}
	}
	
	for(i = 0; i < vetorN.size()-1; i++) {
		cout << vetorN.at(i) << " ";
	}
    
    cout << vetorN.at(i) << endl;

	return 0;
}
