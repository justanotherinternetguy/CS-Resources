#include <bits/stdc++.h>
using namespace std;

bool palin(string s) {
  if (equal(s.begin(), s.begin() + s.size()/2, s.rbegin())) return true;
  return false;
}

int main(void) {
  string s = "bobob";
  cout << palin(s) << '\n';
}
