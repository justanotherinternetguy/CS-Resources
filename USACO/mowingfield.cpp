#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

void display(set<pair<int, int>> s) {
	for (auto x : s) {
		cout << x.first << ", " << x.second << '\n';
	}
}

int main() {
	// freopen("mowing.in", "r", stdin);
	// freopen("mowing.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, t;
	cin >> n;
	t = 0;
	pair<int, int> coord;
	coord = make_pair(0, 0);
	set<pair<int, int>> s;

	int res = 0;

	for (int i = 0; i < n; i++) {
		char dir;
		int cnt;
		cin >> dir >> cnt;
		for (int j = 0; j < cnt; j++) {
			if (dir == 'N') {
				coord.second++;
			}
			
			if (dir == 'S') {
				coord.second--;
			}

			if (dir == 'E') {
				coord.first++;
			}

			if (dir == 'W') {
				coord.first--;
			}
			t++;
			s.insert(coord);
			if (s.size() != t) {
				cout << "something wrong" << '\n';
			}
		}
		// display(s);
	}

	return 0;
}
