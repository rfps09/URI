#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	
    vector<int> p, m, f, q, b;
	int P = 0, M = 0, F = 0, Q = 0, B = 0;
    vector<long long int> ans;
	int n = 0, v = 0, k = 0;
	long long int sum = 0;
    
    cin >> P;
    for(int i = 0; i < P; i++) {
        cin >> v;
        p.push_back(v);
    }
    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> v;
        m.push_back(v);
    }
    cin >> F;
    for(int i = 0; i < F; i++) {
        cin >> v;
        f.push_back(v);
    }
    cin >> Q;
    for(int i = 0; i < Q; i++) {
        cin >> v;
		q.push_back(v);
    }
    cin >> B;
    for(int i = 0; i < B; i++) {
        cin >> v;
        b.push_back(v);
    }
    
    cin >> k;

	for(int i = 0; i < P; i++) {
		for(int j = 0; j < M; j++) {
			for(int k = 0; k < F; k++) {
				for(int l = 0; l < Q; l++) {
					for(int h = 0; h < B; h++) {
						sum = p[i]+m[j]+f[k]+q[l]+b[h];
						ans.push_back(sum);
					}
				}
			}
		}
	}

	sort(ans.begin(), ans.end(), greater<int>());
	sum = 0;
	for(int i = 0; i < k; i++) {
		sum += ans[i];
	}
	cout << sum << endl;

	return 0;
}
