#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

const int MAXN = 105;

int t, n, m;
unordered_map<string, int> mp;

bool check(int idx, int val) {
    if (idx == n) {
        return true;
    }

    for (auto [s, x] : mp) {
        if (s[idx] == '1' && x != val) {
            return false;
        }
        if (s[idx] == '0' && x == val) {
            return false;
        }
    }

    return check(idx + 1, val) || check(idx + 1, val ^ 1);
}

int main() {
    cin >> t;

    while (t--) {
        cin >> n >> m;
        mp.clear();

        bool lie = false;
        for (int i = 0; i < m; i++) {
            string s;
            cin >> s;
            int x;
            cin >> x;

            mp[s] = x;
        }

        bool ok = false;
        for (int i = 0; i < (1 << n); i++) {
            if (check(0, i)) {
                ok = true;
                break;
            }
        }

        if (!ok) {
            lie = true;
        }

        if (lie) {
            cout << "LIE" << endl;
        } else {
            cout << "OK" << endl;
        }
    }

    return 0;
}
