#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
const int INF = 1e9;

int main() {
	freopen("measurement.in", "r", stdin);
	freopen("measurement.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<tuple<int, string, int>> vec; // day, name, change

	for (int i = 0; i < n; i++) {
		int t1, t3;
		string t2;

		cin >> t1 >> t2 >> t3;

		tuple<int, string, int> tmp = make_tuple(t1, t2, t3);
		vec.pb(tmp);
	}
	sort(all(vec));
	int x, y, z;
	x = 7;
	y = 7;
	z = 7;
	string w;

	int res = 0;

	for (int i = 0; i < n; i++) {
		if (get<1> (vec[i]) == "Mildred") {
			y += get<2> (vec[i]);
		} else if (get<1> (vec[i]) == "Elsie") {
			x += get<2> (vec[i]);
		} else {
			z += get<2> (vec[i]);
		}

		int m = max({x, y, z});
		string temp;

		if (x == m) temp.pb('E');
		if (y == m) temp.pb('M');
		if (z == m) temp.pb('B');

		sort(all(temp));

		if (temp != w) {
			res++;
			w = temp;
		}
	}
	cout << res << '\n';
	return 0;
}
