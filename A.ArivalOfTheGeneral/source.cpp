#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int mn = INT_MAX;
	int mx = INT_MIN;
	int mini, maxi,sec;

	for(int i = 0;i < n;i++) {
		int e = 0;
		cin >> e;
		if(e <= min) {
			mini = i;
			min = e;
		} 
		if(e > max) {
			maxi = i;
			max = e;
		} 
	}

	if(maxi > mini) {
		sec = maxi + (n - mini - 2);
	} else {
		sec = maxi + (n - mini - 1);
	}

	cout << sec;

	return 0;
}
