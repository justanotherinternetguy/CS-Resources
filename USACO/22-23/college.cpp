#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N;
    vector<ll> cows;

    cin >> N;

    for (ll i = 0; i < N; i++) {
        ll t;
        cin >> t;
        cows.push_back(t);
    }

    sort(cows.rbegin(), cows.rend());

    ll rev = 0;
    ll temprev = 0;
    ll fintut = cows[0];

    for (ll tut = cows[0]; tut > 0; tut--) {
        temprev = 0;
        for (ll i = 0; i < cows.size(); i++) {
            if (tut <= cows[i]) {
                temprev += tut;
            }
            if (temprev >= rev && tut <= fintut) {
                rev = temprev;
                fintut = tut;
            }
        }
    }
    cout << rev << " " << fintut << '\n';

    return 0;
}
