#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair
#define mt make_tuple

const int INF = 1e9;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);

  int a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;

  // (b - a) + (d - c) - intersection between ([a, b] and [c, d])

  cout << ((b - a) + (d - c)) - max(min(b, d) - max(a, c), 0) << '\n';

  return 0;
}
