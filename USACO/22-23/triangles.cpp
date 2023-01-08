#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
  freopen("triangles.in", "r", stdin);
  freopen("triangles.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;
  vector<ll> X(n, 0);
  vector<ll> Y(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> X[i] >> Y[i];
  }

  int res = -1;
  // i - corner
  // j = same x-coord as i
  // j = same y-coord as i
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (Y[i] == Y[j] && X[i] == X[k]) {
          int area = abs(X[j] - X[i]) * abs(Y[k] - Y[i]);
          res = max(res, area);
        }
      }
    }
  }
  cout << res << '\n';

  return 0;
}

