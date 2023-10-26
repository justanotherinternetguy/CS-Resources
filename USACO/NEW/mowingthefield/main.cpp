#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("./mowing.in", "r", stdin);
//  freopen("./mowing.out", "w", stdout);

  pair<int, int> pos(0, 0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    char dir;
    int steps;

    cin >> dir >> steps;

    if (dir == 'N') {
      pos.second += steps;
    }
    else if (dir == 'S') {
      pos.second -= steps;
    }
    else if (dir == 'E') {
      pos.first += steps;
    }
    else if (dir == 'W') {
      pos.first -= steps;
    }
  }
  cout << pos.first << pos.second << endl;
  
  return 0;
}
