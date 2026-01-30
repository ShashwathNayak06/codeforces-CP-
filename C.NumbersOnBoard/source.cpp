#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		if(n == 2) {
			cout << 2 << endl;
			cout << 1 << " " << 2 << endl;
			continue;
		}
		vector<int> odd, eve;
		vector<vector<int>> res;
		for(int i = 0;i < n;i++) {
			if((i + 1) % 2 == 0) eve.push_back(i+1);
			else odd.push_back(i+1);
		}
		int a,b;
		int g = n;
		while((odd.size() != 1 || eve.size() != 0) 
			&& (odd.size() != 0 || eve.size() != 1)) {
			if(g%2 == 0) {
				a = eve.back();
				eve.pop_back();
				b = eve.back();
				eve.pop_back();
	
				g = (a+b)/2;
			} else {
				a = odd.back();
				odd.pop_back();
				b = odd.back();
				odd.pop_back();
	
				g = (a+b)/2;
			}
			res.push_back({b,a});
			if(g % 2 == 0) {
				eve.push_back(g);
			} else {
				odd.push_back(g);
			}
		}
	
		int ans = (res[res.size() - 1][0] + res[res.size() - 1][1])/2;
	
		cout << ans << endl;
	
		for(int i = 0;i < res.size();i++) {
			for(int j = 0;j < 2;j++) cout << res[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}
