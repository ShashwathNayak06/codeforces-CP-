#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[5][5];

	for(int i = 0;i < 5;i++) {
		for(int j = 0;j < 5;j++) {
			cin >> arr[i][j];
		}
	}

	int a=0,b=0;

	for(int i = 0;i < 5;i++) {
		for(int j = 0;j < 5;j++) {
			if(arr[i][j] == 1) {
				a = abs(2-i);
				b = abs(2-j);
			}
		}
	}

	cout << a+b;

	return 0;
}
