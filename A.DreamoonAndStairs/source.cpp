#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;

	if(n < m) {
		cout << -1;
		return 0;
	}

	int res = (n+2-1)/2;

	while(res <= n) {
		if(res % m == 0) {
			break;
		}
		res++;
	}

	cout << res;

	return 0;
}
