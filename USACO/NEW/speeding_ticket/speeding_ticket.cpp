#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  freopen("./speeding.in", "r", stdin);
  freopen("./speeding.out", "w", stdout);


  int n, m;
  cin >> n >> m;

  int law[100];
  int actual[100];

  int l, s;
  int pos = 0;

  for (int i = 0; i < n; i++) {
    cin >> l >> s;
    for (int j = pos; j < pos + l; j++) {
      law[j] = s;
    }
    pos += l;
  }

  pos = 0;
  for (int i = 0; i < m; i++) {
    cin >> l >> s;
    for (int j = pos; j < pos + l; j++) {
      actual[j] = s;
    }
    pos += l;
  }

  int maxx = 0;

  for (int i = 0; i < 100; i++) {
    maxx = max(maxx, actual[i] - law[i]);
  }
  cout << maxx << '\n';

  return 0;
}
