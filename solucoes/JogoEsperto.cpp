#include <iostream>
#include <queue>
#include <map>

using namespace std;

int bfs(int n, int m){
    int x = 0, y = 0;
    queue<double> fila;
    map<double,int> mymap;
    mymap[n] = 0;
    fila.push(n);
    
    while(!fila.empty()) {
        x = fila.front();
        fila.pop();
        
        y = x*2;
        if(mymap.find(y) == mymap.end()) {
            fila.push(y);
            mymap[y] = mymap[x]+1;
        }
        if(y == m) return mymap[y];
        

        y = x*3;
        if(mymap.find(y) == mymap.end()) {
            fila.push(y);
            mymap[y] = mymap[x]+1;
        }
        if(y == m) return mymap[y];

        y = x/2;
        if(mymap.find(y) == mymap.end()) {
            fila.push(y);
            mymap[y] = mymap[x]+1;
        }
        if(y == m) return mymap[y];

        y = x/3;
        if(mymap.find(y) == mymap.end()) {
            fila.push(y);
            mymap[y] = mymap[x]+1;
        }
        if(y == m) return mymap[y];

        y = x+7;
        if(mymap.find(y) == mymap.end()) {
            fila.push(y);
            mymap[y] = mymap[x]+1;
        }
        if(y == m) return mymap[y];

        y = x-7;
        if(mymap.find(y) == mymap.end()) {
            fila.push(y);
            mymap[y] = mymap[x]+1;
        }
        if(y == m) return mymap[y];
    }
    
    return 0;
}

int main() {
    int n = 0, m = 0;

    cin >> n >> m;
    
    cout << bfs(n,m) << endl;

    return 0;
}
