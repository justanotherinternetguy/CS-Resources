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
#define mt make_tuple

const int INF = 1e9;
const int LEN = 100;

int main() {
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);

	int n, m;
	cin >> n >> m;

	int start = 0;

	vector<int> limit(LEN);
	vector<int> cow(LEN);


	for (int i = 0; i < n; i++) {
		int l, s;
		cin >> l >> s;
		for (int j = start; j < start+l; j++) {
			limit[j] = s;
		}
		start += l;

	}


	start = 0;

	for (int i = 0; i < m; i++) {
		int l, s;
		cin >> l >> s;
		for (int j = start; j < start+l; j++) {
			cow[j] = s;
		}
		start += l;
	}
	
	int res = 0;

	for (int i = 0; i < LEN; i++) {
		res = max(res, cow[i] - limit[i]);
	}
	
	cout << res << '\n';

	return 0;
}
