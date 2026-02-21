#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		string p;
		cin >> p;

		string h;
		cin >> h;
		
		int n = p.size();
		int m = h.size();
		vector<int> pHash(26,0);

		for(int i = 0;i < n;i++) pHash[p[i] - 'a']++;
		
		int flag = 0;
		for(int i = 0;i <= m - n;i++) {
			vector<int> hHash(26,0);
			for(int j = i;j < i + n;j++) {
				hHash[h[j] - 'a']++;
			}
			bool ans = true;
			for(int j = 0;j < 26;j++) {
				if(pHash[j] != hHash[j]) {
					ans = false;
				}
			}
			
			if(ans) {
				flag = 1;
				break;
			}
		}
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	
	
    return 0;
}
