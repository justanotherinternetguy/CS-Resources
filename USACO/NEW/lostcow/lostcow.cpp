#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  freopen("./lostcow.in", "r", stdin);
	//freopen("./lostcow.out", "w", stdout);

  int x, y;
  cin >> x >> y;
  // 3, 6
  // (3, 4) = 1
  // (4, 1) = 3
  // (1, 7) = 6
  // 1 + 3 + 5 = 9
  
  int iter = 1;
  int curr = x;
  int prev = x;
  bool sign = false;
  int dist = 0;

  for (int i = 0; i < 5; i++) {
    curr = (x + iter);
    dist += abs(curr - prev);

    cout << dist << '\n';
    iter *= -2;

    if ()
  }

  return 0;
}
