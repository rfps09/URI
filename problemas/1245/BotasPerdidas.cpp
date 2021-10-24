#include <iostream>

using namespace std;

int main() {
	int i = 0, n = 0, vetorE[31], vetorD[31], aux = 0, pares = 0;
	char dir;

	while(scanf("%d", &n) != EOF) {
		for(i = 0; i < 31; i++) {
			vetorE[i] = 0;
			vetorD[i] = 0;
		}

		for(i = 0; i < n; i++) {
			scanf("%d%*c%c", &aux, &dir);
			if(dir == 'E'){
				vetorE[aux-30]++;
			}
			else{
				vetorD[aux-30]++;
			}
		}

		for(i = 0; i < 31; i++) {
			if(vetorE[i] > 0 && vetorD[i] > 0) {
				if(vetorE[i] - vetorD[i] > 0 || vetorE[i] - vetorD[i] == 0){
					pares += vetorD[i];	
				}	
				else {
					pares += vetorE[i];
				}
			}
		}

		printf("%d\n", pares);

		pares = 0;
	}

	return 0;
}
