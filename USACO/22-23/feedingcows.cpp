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

/*
 * "covered" = cow has grass to eat (grass within distance K)
 * if the current cow is covered, we move on
 * if the cow is not covered? where is the best place to put the grass?
 * optimal position: grass at i+K
 * if overflow: place grass at i
 */

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, k;
		string s;
		int cnt = 0;
		cin >> n >> k;
		cin >> s;

		// first grass loc that does NOT cover cow of that species
		int patchH = -k - 1;
		int patchG = -k - 1;

		string res(n, '.'); // construction

		for (int i = 0; i < n; i++) {
			if (s[i] == 'G' && i-patchG > k) {
				++cnt;

				if (i + k >= n) {
					patchG = i;
					if (res[patchG] == 'H') patchG--;
				} else {
					patchG = i + k; // place patch G i+k away
				}
				res[patchG] = 'G';
			}

			if (s[i] == 'H' && i - patchH > k) {
				++cnt;
				if (i + k >= n) {
					patchH = i;
					if (res[patchH] == 'G') patchH--;
				} else {
					patchH = i + k; // place patch H i+k away
				}

				res[patchH] = 'H';
			}
		}
		cout << cnt << '\n' << res << '\n';
	}
	return 0;
}
