#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin >> n >> x >> y;

	vector<int> days(n);
	for(int i = 0;i < n;i++) cin >> days[i];

	int res = 1;
	for(int i = 0;i < n;i++) {
		int right = i+1;
		int left = i-1;
		int a = 0,b = 0;
		
		while(right <= i+y) {
			if(right < n && days[i] > days[right]) {
				break;
			} else {
				right++;
				a++;
			}
		}

		while(left >= i-x) {
			if((left >= 0 && days[i] > days[left])) {
				break;
			} else {
				left--;
				b++;
			}
		}

		if((a != 0) && (a == y && b == x)) {
			res = i+1;
			break;
		}

	}

	cout << res;
	return 0;
}
