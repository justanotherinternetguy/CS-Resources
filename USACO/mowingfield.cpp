#include <bits/stdc++.h>
using namespace std;


int main() {
  freopen("mowing.in", "r", stdin);
  freopen("mowing.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  // figure out the largest period of time that exists such that Farmer John never mows the same square of grass twice within the given time
  // FJ will mow at most 1k squares of grass,
  // just keep track of the last point in time when Farmer John moved the grass in the given square

  int n;
  cin >> n;
  int x = 0;
  int y = 0;
  int t = 0;
  map<pair<int, int>, int> mp;
  int ans = 1e9;

  for (int i = 0; i < n; i++) {
    string dir;
    int dist;
    cin >> dir >> dist;

    for (int j = 0; j < dist; j++) {
      t++;
      if (dir == "N") y++;
      else if (dir == "S") y--;
      else if (dir == "E") x++;
      else x--;
      if (mp.count({x, y}) == 1) {
	ans = min(ans, t-mp[{x, y}]);
      }
      mp[{x, y}] = t;
    }
  }

  cout << (ans == 1e9 ? -1 : ans) << '\n';
  
  
  return 0;
}
