#include <bits/stdc++.h>
using namespace std;
#define ll long long

// bool peek(string config, int curr)

void solve(int num, int max, string cows) {
    if (max == 0) {
        cout << num << '\n';
        cout << cows << '\n';
        return;
    }
    
    if (num <= 2) {
        cout << num << '\n';
        cout << cows << '\n';
        return;
    }

    string config(num, '.');
    int patches;

    vector<int> gs;
    vector<int> hs;

    for (int i = 0; i < num; i++) {
        if (cows[i] == 'G') {
            gs.push_back(i);
        } else if (cows[i] == 'H') {
            hs.push_back(i);
        }

    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num, max;
        string cows;

        cin >> num >> max;
        cin >> cows;

        solve(num, max, cows);
    }

    return 0;
}
