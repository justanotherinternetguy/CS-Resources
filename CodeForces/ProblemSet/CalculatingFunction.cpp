#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, res;
  cin >> n;
  if (n % 2 == 0) {
    res = n / 2;
  }

  else {
    res = ((n + 1) / 2) * (-1);
  }
  cout << res << endl;
  return 0;
}

