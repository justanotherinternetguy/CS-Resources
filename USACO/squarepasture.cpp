#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("square.in", "r", stdin);
  freopen("square.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // min of left sides
  // min of bottom sides
  // max of right sides
  // max of top sides

  int x1, y1, x2, y2, x3, y3, x4, y4;

  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

  int l, r, t, b; // sides for result
  l = min(x1, x3);
  r = max(x2, x4);
  b = min(y1, y3);
  t = max(y2, y4);

  // result will need a side length = max(side lengths of rectangles)
  int sidelen = max(r - l, t - b);
  cout << sidelen * sidelen << "\n";
}
