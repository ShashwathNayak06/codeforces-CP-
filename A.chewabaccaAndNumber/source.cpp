#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x;
	cin >> x;
	stack<int> s;
	while(x != 0) {
		long long rem = x%10;
		if(rem > 4) {
			s.push(9-rem);
		} else {
			s.push(rem);
		}
		x /= 10;
	}

	x = 0;
	if(s.top() == 0) {
		x = x*10 + 9;
		s.pop();
	} 

	while(!s.empty()) {
		x = x*10 + s.top();
		s.pop();
	}

	cout << x;

	return 0;
}
