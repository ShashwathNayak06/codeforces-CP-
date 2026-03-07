#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		vector<int> a(3);
		for(int i = 0;i < 3;i++) cin >> a[i];
		cin >> n;

		sort(a.begin(),a.end());
		int x,y;
		y = (a[2]-a[1]) + (a[2]-a[0]);
		x = n - y;

		if(x >= 0 && x % 3 == 0) cout << "YES\n";
		else cout << "NO\n"; 
	}
	return 0;
}
