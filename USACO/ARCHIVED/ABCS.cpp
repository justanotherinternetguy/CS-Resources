#include <bits/stdc++.h>
using namespace	std;

int main() {
	// A, B, C
	
	int inputs[7];

	for (int i = 0; i < 7; i++) {
		cin >> inputs[i];
	}

	sort(inputs, inputs + 7);

	int a = inputs[0];
	int b = inputs[1];
	int c = inputs[6] - a - b;

	cout << a << ' ' << b << ' ' << c << '\n';
	
	return 0;
}
