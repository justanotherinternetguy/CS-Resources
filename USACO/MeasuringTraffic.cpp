#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  freopen("traffic.in", "r", stdin);
  freopen("traffic.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> prefixes;
    vector<pair<int, int>> bounds;

    for (int i = 0; i < n; i++) {
        string pref;
        int low, high;
        cin >> pref >> low >> high;
        prefixes.push_back(pref);
        bounds.push_back(make_pair(low, high));
    }

    int lowrange = -INF;
    int highrange = INF;

    for (int i = n-1; i >= 0; i--) {
        if (prefixes[i] == "none") {
            // new range
            lowrange = max(lowrange, bounds[i].first);
            highrange = min(highrange, bounds[i].second);
        } else if (prefixes[i] == "off") {
            // update range
            lowrange += bounds[i].first;
            highrange += bounds[i].second;
        } else if (prefixes[i] == "on") {
            lowrange -= bounds[i].second;
            highrange -= bounds[i].first;

            // edge: set 0 if low < 0
            lowrange = max(0, lowrange);
        }
    }


    cout << lowrange << ' ' << highrange << '\n';

    lowrange = -INF;
    highrange = INF;
    // scan from other dir
    
    for (int i = 0; i < n; i++) {
        if (prefixes[i] == "none") {
            // new range
            lowrange = max(lowrange, bounds[i].first);
            highrange = min(highrange, bounds[i].second);
        } else if (prefixes[i] == "on") {
            // update range
            lowrange += bounds[i].first;
            highrange += bounds[i].second;
        } else if (prefixes[i] == "off") {
            lowrange -= bounds[i].second;
            highrange -= bounds[i].first;

            // edge: set 0 if low < 0
            lowrange = max(0, lowrange);
        }
    }
    cout << lowrange << ' ' << highrange << '\n';
  return 0;
}
