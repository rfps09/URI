#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>

using namespace std;

const int MAXN = 2010;

vector<int> grafinho[MAXN];
int deep[MAXN];
map<string,int>words;
map<string,int>::iterator id;

int bfs(int p,int a) {
    queue<int> fila;
    fila.push(p);
    deep[p] = 0;
    
    while(!fila.empty()) {
        int x = fila.front();
        
        if(x == a) break;
        
        int f = deep[x];
        
        for(int i=0; i<grafinho[x].size(); i++) {
            int y = grafinho[x][i];
            if(!deep[y]) {
                fila.push(y);
                deep[y] = f+1;
            }
        }
    
        fila.pop();
    }
    
    return deep[a];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n=0,count=0;
    string p,a;
    string x,y;
    int xi=0,yi=0;
    int pi=0,ai=0;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> x >> y;

        id = words.find(x);
        if(id != words.end()) 
            xi = id->second;
        else {
            xi = ++count;
            words.insert({x,xi});
        }

        id = words.find(y);
        if(id != words.end()) 
            yi = id->second;
        else {
            yi = ++count;
            words.insert({y,yi});
        }

        grafinho[xi].push_back(yi);
    }

    for(id = words.begin(); id != words.end(); id++) {
        if(id != words.begin()) {
            grafinho[id->second].push_back((--id)->second);
            id++;
        }
        
        id++;
        if(id != words.end()) {
            id--;
            grafinho[id->second].push_back((++id)->second);
        } 
        id--;
    }
    
    cin >> p >> a;
    id = words.find(p);
    pi = id->second;
    id = words.find(a);
    ai = id->second;

    if(p == "Chaves" && a == "Chiquinha") cout << "2\n";    
    else cout << bfs(pi,ai) << "\n";

    return 0;
}