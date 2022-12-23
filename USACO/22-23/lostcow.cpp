#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
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
=======

const int INF = 1e9;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
>>>>>>> 110d787c5e20bef709a2e8a260630955735f47be

    int x, y;
    cin >> x >> y;

<<<<<<< HEAD
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
=======
    vector<int> zz;

    if (x == y) cout << 0 << '\n';
    else if (x < y) {
        int coe = 1;

        while (x+coe < y) {
            zz.push_back(x + coe);
            coe *= -2;
        }

        zz.push_back(x + coe);

        int res = 1;

        for (int i = 0; i < zz.size()-1; i++) {
            res += abs(zz[i] - zz[i+1]);
        }
        res -= zz[zz.size() - 1] - y;
        cout << res << '\n';
    } else {
        int coe = 1;

        while (x + coe > y) {
            zz.push_back(x + coe);
            coe *= -2;
        }
        zz.push_back(x + coe);

        int res = 1;

        for (int i = 0; i < zz.size()-1; i++) {
            res += abs(zz[i] - zz[i+1]);
        }
        res -= y - zz[zz.size() - 1];
        cout << res << '\n';
    }
    
    return 0;
>>>>>>> 110d787c5e20bef709a2e8a260630955735f47be
}
