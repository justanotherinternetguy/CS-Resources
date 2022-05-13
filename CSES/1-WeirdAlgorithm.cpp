#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
	long long n {};
	cin >> n;

	if (n == 1) { cout << n; }

	else {
		do {
			cout << n << ' ';
			if (n % 2 == 0) { n /= 2; }
			else if (n % 2 == 1) { n = (n*3)+1; }
		} while (n != 1);
		cout << n;
	}


	
}
