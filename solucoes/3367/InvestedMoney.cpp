#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int n,d;
int ans = 1e9;
string day;
string dias[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
map<string,pair<string,int>> mymap;

int solve(int d) {
    int dia;
    for(int i=0; i<7;i++)
        if(dias[i] == day) {
            dia = i;
            break;
        }
    
    string Dia = dias[(dia+7-(d%7))%7];
    int jump = 0;

    do {
        if(Dia == "Mon" && d - jump >= 91) {
            jump += 91*((d-jump)/91);
        }
        jump += mymap[Dia].second;
        Dia = mymap[Dia].first;
    } while(jump < d);

    return jump-d;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    mymap["Mon"] = {"Wed",30};
    mymap["Tue"] = {"Thu",30};
    mymap["Wed"] = {"Fri",30};
    mymap["Thu"] = {"Mon",32};
    mymap["Fri"] = {"Mon",31};

    cin >> day >> n;

    for(int i=0; i<n; i++) {
        cin >> d;
        ans = min(ans,solve(d));
    }

    cout << ans << "\n";

    return 0;
}