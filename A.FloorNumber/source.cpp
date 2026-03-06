#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,x;
		cin >> n >> x;
		int ans = (n-2+x-1)/x + 1;
		if(n <= 2) cout << 1 << endl;
		else cout << ans << endl;
	}
	return 0;
}
