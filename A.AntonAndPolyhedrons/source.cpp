#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	string shapes[n];
	for(int i = 0;i < n;i++) cin >> shapes[i];
	int faces = 0;
	for (int i = 0; i < n; i++) {
		if(shapes[i] == "Tetrahedron") faces += 4;
		else if(shapes[i] == "Cube") faces += 6;
		else if(shapes[i] == "Octahedron") faces += 8;
		else if(shapes[i] == "Dodecahedron") faces += 12;
		else faces += 20;
	}
	cout << faces;

	return 0;
}
