#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> v;
  int temp;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
  }

  auto it = find(begin(v), end(v), 1);

  if (*it == 1) {
    cout << "HARD" << '\n';
  } else {
    cout << "EASY" << '\n';
  }
}