#include <bits/stdc++.h>
using namespace std;

void digit_sum(int n) {
  int sum = 0;
  while (n != 0) {
    sum = sum + n%10;
    n /= 10;
  }
  cout << sum << '\n';
}

int main(void) {
  int n = 2456;
  digit_sum(n);
}
