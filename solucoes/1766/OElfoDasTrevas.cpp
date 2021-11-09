#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

typedef struct {
	int peso = 0;
	int idade = 0;
	float altura = 0;
	string nome;
}RENAS;

bool comparer(RENAS A, RENAS B) {
	if(A.peso == B.peso) {
	if(A.idade == B.idade) {
	if(A.altura == B.altura) {
	return A.nome < B.nome;
	}
	return A.altura < B.altura;
	}
	return A.idade < B.idade;
	}
	return A.peso > B.peso;	
}

int main() {
	ios::sync_with_stdio(0);

	int t = 0, n = 0, m = 0, p = 0, i = 0;
	float a;
	string s;
	vector<RENAS> renas;
	RENAS aux;

	cin >> t;
	for(int j = 0; j < t; j++) {
		cin >> n >> m;
		for(int k = 0; k < n; k++) {
			cin >> s >> p >> i >> a;
			aux.nome = s;
			aux.peso = p;
			aux.idade = i;
			aux.altura = a;
			renas.push_back(aux);
		}
		sort(renas.begin(), renas.end(), comparer);
		cout << "CENARIO {" << j+1 << "}" << endl;
		for(int k = 0; k < m; k++) {
			cout << k+1 << " - ";
			cout << renas[k].nome << endl;
		}
		renas.clear();
	}

	return 0;
}
