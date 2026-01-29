#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 0;
	int j = 1;
	int a = 0;
	while(n >= a+j) {
		a = a + j;
		n = n - a;
		i++;
		j++;
	}

	cout << i;

	return 0;
}
