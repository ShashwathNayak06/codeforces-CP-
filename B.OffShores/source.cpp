#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		long long x, y;
		cin >> n >> x >> y;
		vector<long long> a(n);
		for(int i = 0;i < n;i++) cin >> a[i];
	
		long long sa = 0;
		for(int i = 0;i < n;i++) {
			sa += a[i]/x;
		}
		long long res = INT_MIN;
		for(int i = 0;i < n;i++) {
			long long si = sa - (a[i]/x);
			res = max(res, a[i]+si*y);
		}
		cout << res << endl;
	}

	

	return 0;
}
