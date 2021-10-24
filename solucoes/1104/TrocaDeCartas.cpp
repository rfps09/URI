#include <iostream>
#include <set>

using namespace std;

int main() {
  ios::sync_with_stdio(0);

  int a = 0, b = 0, aux = 0;
	set<int> A;
	set<int> B;
	set<int> intersection;
	
	while(cin >> a >> b && (a || b)) {
	    for(int i = 0; i < a; i++) {
    		cin >> aux;
    		A.insert(aux);
    		intersection.insert(aux);
    	}
    	
    	for(int i = 0; i < b; i++) {
    		cin >> aux;
    		B.insert(aux);
    		intersection.insert(aux);
    	}
    	
    	if(A.size() < B.size()) cout << intersection.size()-B.size() << "\n";
    	else cout << intersection.size()-A.size() << "\n";
    	
    	A.clear();
    	B.clear();
    	intersection.clear();
	}

    return 0;
}
