#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen ("teleport.in", "r", stdin);
	freopen ("teleport.out", "w", stdout);

	int a, b, x, y;
	cin >> a >> b >> x >> y;

	int dist = abs(a - b);
	// dist wo travel
	if (dist > abs(a - x) + abs(b - y)) {
		dist = abs(a - x) + abs(b - y);
	}

	if (dist > abs(a - y) + abs(b - x)) {
		dist = abs(a - y) + abs(b - x);
	}

	cout << dist << endl;
}