#include <bits/stdc++.h>
using namespace std;

// each cow in one group
// line up groups so that sum(group ID) is even, odd, even, etc...
// RET max possible number of groups

// observations
/*
 * odd x 2 = even
 * odd x 3 = odd
 * odd x 4 = even
 * etc...
*/

int main() {
  int N;
  cin >> N;

  int even = 0;
  int odd = 0;

  for (int i = 0; i < N; i++) {
    int cow;
    cin >> cow;
    if (cow % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  while (odd > even) {
    odd -=2;
    even++;
  }
  if (even > odd+1) {
    even = odd + 1;
  }
  cout << odd + even << '\n';
  
  
  return 0;
}
