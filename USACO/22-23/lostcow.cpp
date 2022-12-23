#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

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
}
