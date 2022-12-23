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

int dist (int t1, int t2) {
    return abs(t2 - t1);
}

int main() {
	// freopen("lostcow.in", "r", stdin);
	// freopen("lostcow.out", "w", stdout);

    int x, y;
    cin >> x >> y;

    ll coe = 1;
    int cntr = 0;
    int moved = 0;
    int prev = 3;

    for (int i = 0; i < 9; i++) {
        int dest;
        if (cntr % 2 == 0) {
            dest = (x + coe);
            moved += abs(dest - prev);
        } else {
            dest = (x - coe);
            moved += abs(dest - prev);
        }

        coe *= 2;
        cntr++;
        prev = dest;
    }

    cout << moved << '\n';

	return 0;
}
