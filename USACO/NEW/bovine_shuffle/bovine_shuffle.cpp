#include <bits/stdc++.h>
using namespace std;

// If the ith cow moves to a_i after one shuffle, then the cow at a_i was at i one shuffle ago

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("./shuffle.in", "r", stdin);
    freopen("./shuffle.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> shuffle;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        shuffle.push_back(t);
    }

    vector<int> ids;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        ids.push_back(t);
    }

    for (int i = 0; i < 3; i++) {
        vector<int> past_order(n);
        for (int j = 0; j < n; j++) {
            past_order[j] = ids[shuffle[j]+1];
        }
        ids = past_order;
    }

    for (auto i : ids) {
        cout << i << '\n';
    }

    return 0;
}
