#include <bits/stdc++.h>

using namespace std;
using umapsi = unordered_map<string,int>;
using umapsvecs = unordered_map<string,vector<string>>;

int dfs(string S,int group,umapsi &person,umapsvecs &graph,umapsi &group_person) {
    group_person[S] = group;
    vector<string> &neighbors = graph[S];

    int highest = person[S];

    for(int i=0; i<(int)neighbors.size(); i++) {
        if(!group_person[neighbors[i]]) {
            highest = max(highest,dfs(neighbors[i],group,person,graph,group_person));
        }
    }

    return highest;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int N,M,Q;
    string S;
    string S1,S2;
    int V;
    umapsi person;
    umapsi group_person;
    umapsvecs graph;

    cin >> N >> M >> Q;

    for(int i=0; i<N; i++) {
        cin >> S >> V;
        person[S] = V;
        group_person[S] = 0;
    }

    for(int i=0; i<M; i++) {
        cin >> S1 >> S2;
        graph[S1].push_back(S2);
        graph[S2].push_back(S1);
    }

    int group = 0;
    vector<int> group_highest(N+1);

    for(auto it : person) {
        if(!group_person[it.first]) {
            group++;
            group_highest[group] = dfs(it.first,group,person,graph,group_person);
        }
    }

    for(int i=0; i<Q; i++) {
        cin >> S;

        bool ans = false;
        if(person[S] >= 5) ans = true;
        else if(group_highest[group_person[S]] <= 5) ans = true;

        cout << (ans?"S":"N") << "\n";
    }

    return 0;
}