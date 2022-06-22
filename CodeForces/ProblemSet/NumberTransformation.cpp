#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define all(x) x.begin(), x.end()
#define FLP(i, a, b) for (int i = a; i <= b; i++)

typedef vector<int> vi;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int rounds;
  cin >> rounds;

  for (int i = 0; i < rounds; i++) {
    int x, y;
    cin >> x >> y;

    // x --> y

    if (x > y) {
      cout << 0 << " " << 0 << "\n";
    }

    else if (x == y) {
      cout << 1 << " " << 1 << "\n";
    }

    else if (y % x != 0) {
      cout << 0 << " " << 0 << "\n";
    }

    else {
      cout << 1 << " " << y / x << "\n";
    }
    // a number of times
    // b what ur timing
  }
  return 0;
}
