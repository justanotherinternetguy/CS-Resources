#include <bits/stdc++.h>
using namespace std;

void solve(int b1, int b2, int s1, int s2, int g1, int g2, int p1, int p2) {
  int g_to_p = p2 - p1;
  int s_to_g = g2 - g1 + p2 - p1;
  int b_to_s = s2 - s1 + g2 - g1 + p2 - p1;

  cout << b_to_s << "\n" << s_to_g << "\n" << g_to_p;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  freopen("promote.in", "r", stdin);
  freopen("promote.out", "w", stdout);

  int b1, b2, s1, s2, g1, g2, p1, p2;
  cin >> b1 >> b2;
  cin >> s1 >> s2;
  cin >> g1 >> g2;
  cin >> p1 >> p2;

  solve(b1, b2, s1, s2, g1, g2, p1, p2);
  
  
  return 0;
}
