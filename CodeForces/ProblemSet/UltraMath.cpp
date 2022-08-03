#include <bits/stdc++.h>
using namespace std;


// logic gates
// 0, 0 = 0
// 1, 1 = 0
// 1, 0 = 0
// XOR


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string n1, n2;
	cin >> n1;
	cin >> n2;

	for (size_t i = 0; i < n1.size(); ++i) {
		if (n1[i] == n2[i]) {
			n1[i] = '0';
		} else {
			n1[i] = '1';
		}
	}
	cout << n1 << '\n';

	return 0;
}
