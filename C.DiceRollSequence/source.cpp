#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0;i < n;i++) cin >> a[i];
		int count = 0;
		int i = 0;
		while (i < n) {
			if(a[i-1] == a[i]) {
				count++;
				i++;
			} else if(a[i-1] == 7-a[i]) {
				count++;
				i++;
			}
			i++;
		}
	
		cout << count << endl;
	}

	

	return 0;
}
