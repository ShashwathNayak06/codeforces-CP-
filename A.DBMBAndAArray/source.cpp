#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n, s, x;
	for(int k = 0;k < t;k++) {
		
		cin >> n >> s >> x;
		int sum = 0;
		for(int i = 0;i < n;i++) {
			int ele;
			cin >> ele;
			sum += ele;
		}
	
		while(true) {
			if(sum == s) {
				cout << "YES";
				break;
			} else if(sum > s) {
				cout << "NO";
				break;
			} else {
				sum += x;
			}
		}
		cout << endl;
	}
	

	return 0;
}
