#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a;
		vector<int> b;
		for(int i = 0;i < n;i ++) {
			int x;
			cin >> x;
			if(i % 2 == 0 && x % 2 != 0) a.push_back(x);
			else if(i % 2 != 0 && x % 2 == 0) b.push_back(x);
		}
		if(a.size() == b.size()) cout << a.size() << "\n";
		else cout << -1 << "\n";
	}
	return 0;
}
