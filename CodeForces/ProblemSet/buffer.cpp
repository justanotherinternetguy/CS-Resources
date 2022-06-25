#include <bits/stdc++.h>
using namespace std;

int main() {
  int tick = 0;
  int i = 1;
  while (abs(i) < 10) {
    if (tick % 2 == 0) {
      cout << i * -1 << '\n';
    }

    if (tick % 2 == 1) {
      cout << i << "\n";
    }

    i++;
    tick++;
  }

  return 0;
}
