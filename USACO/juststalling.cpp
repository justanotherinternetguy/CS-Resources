#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;

  int cows[n];
  int stalls[n];

  for (int i = 0; i < n; i++) {
    cin >> cows[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> stalls[i];
  }

  // sort from large --> small
  sort(cows, cows+n, greater<int>());
  sort(stalls, stalls+n, greater<int>());

  int stallsCanBeIn[n];
  fill(stallsCanBeIn, stallsCanBeIn+n, 0);

  // loop through every stall, see if this cow can be in that stall
  for (int cow = 0; cow < n; cow++) {
    for (int stall : stalls) {
      if (stall >= cows[cow]) {
	stallsCanBeIn[cow]++;
      }
    }
  }

  int i = 0;
  int ans = 1;

  for (int c : stallsCanBeIn) {
    ans *= (c - i);
    i++;
  }
  cout << ans << '\n';
      

  
  return 0;
}