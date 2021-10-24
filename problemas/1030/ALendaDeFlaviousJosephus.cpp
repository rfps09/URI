#include <iostream>
#include <queue>

using namespace std;

int main () {
    int NC = 0, n = 0, k = 0;
    int i = 0, j = 0;
    queue<int> fila;

    cin >> NC;

    for(j = 1; j <= NC; j++) {
        cin >> n >> k;

        for (i = 0; i < n; i++) {
            fila.push(i+1);
        }
        
        while (fila.size() > 1) {
            for (i = 1; i < k; i++) {
                fila.push(fila.front());
                fila.pop();
            }

            fila.pop();
        }
        
        cout << "Case " << j <<": " << fila.front() << endl;

        fila.pop();
    }

    return 0;
}