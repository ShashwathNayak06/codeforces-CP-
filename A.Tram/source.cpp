#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int p = 0;
	int res = INT_MIN;

	for(int i = 0;i < n;i++) {
		int a,b;
		cin >> a >> b;
		p = p + b - a;
		res = max(res, p);
	}

	cout << res;

	return 0;
}
