#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;

	for(int k = 0;k < t;k++) {
		int n,h,l;
		cin >> n >> h >> l;
		int a[n];
		for(int i = 0;i < n;i++) {
			cin >> a[i];
		}

		int b[100];
		int x = 0;
		int y = 0;
		int c[100];

		int d = min(l,h);
		int e = max(l,h);

		for(int i = 0;i < n;i++) {
			if(a[i] <= d) {
				b[x] = a[i];
				x++;
			} else if(a[i] <= e) {
				c[y] = a[i];
				y++;
			}
		}

		int ans;

		if(x > y) {
			ans = y + (x - y)/2;
		} else {
			ans = x;
		}
		cout << ans << endl;
	}

	return 0;
}
