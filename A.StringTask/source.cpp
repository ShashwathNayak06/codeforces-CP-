#include <bits/stdc++.h>
using namespace std;

int main() {
	string strIn;
	cin >> strIn;
	int n = strIn.size();

	string vowels = "aAeEoOiIuUyY";
	string strOut = "";
	for(char c:strIn) {
		if(vowels.find(c) == string::npos) {
			strOut += '.';
			strOut += tolower(c);
		}
	}
	cout <<  strOut;

	return 0;
}
