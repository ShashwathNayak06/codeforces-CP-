#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string ans = "";
	bool found = false;
	for(int b = 0;b*7 <= n;b++) {
		if((n-(b*7)) % 4 == 0) {
			int a = (n-(b*7))/4;
			ans = string(a,'4') + string(b,'7');
			found = true;
		}
	}


	if(found) cout << ans;
	else cout << -1;

	return 0;
}
