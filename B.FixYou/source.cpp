#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		int n, m;
		cin >> n >> m;
		int ans = 0;
		for(int i = 0;i < n;i++) {
			for(int j = 0;j < m;j++) {
				char a;
				cin >> a;
				if(i == n-1 && a == 'D' && j != m-1) ans++;
				if(j == m-1 && a == 'R' && i != n-1) ans++;
			}
		}
		cout << ans << endl;
	}

	
	return 0;
}
