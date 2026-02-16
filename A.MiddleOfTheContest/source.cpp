#include <bits/stdc++.h>
using namespace std;

int main() {
	int h1, h2, m1, m2;
	char colon;

	cin >> h1 >> colon >> m1;
	cin >> h2 >> colon >> m2;

	int tm1 = h1*60 + m1;
	int tm2 = h2*60 + m2;

	int tm3 = (tm1+tm2)/2;

	int h3 = tm3/60;
	int m3 = tm3%60;

	if(h3 < 10) cout << "0";
	cout << h3;
	cout << colon;
	if(m3 < 10) cout << "0";
	cout << m3;

	return 0;
}
