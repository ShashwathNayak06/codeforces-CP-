#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int i = 0;i < t;i++) {
		string n;
		cin >> n;
	
		int dig = n[0] - '0';
		int len = n.size();
		int TDig = len*(len+1)/2;

		cout << 10*(dig-1)+TDig << endl;
	}
	
	return 0;
}
