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
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	ll arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr+n);

	ll maxmoney, fintut;
	maxmoney = 0;
	fintut = 0;
	int numCows = n; // cows willing to attend

	for (int i = 0; i < n; i++) {
		ll setTut = arr[i] * numCows;
		if (setTut > maxmoney) {
			maxmoney = max(maxmoney, setTut);
			fintut = arr[i];
		}
		numCows--;
	}

	cout << maxmoney << ' ' << fintut << '\n';

	return 0;
}
