#include <bits/stdc++.h>
using namespace std;

int to_int(char ch) {
  return int(ch) - 48;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N, P;
  cin >> N >> P;

  string str = to_string(N);

  int ind_P = str.length() - P;
  int Pth = to_int(str[str.length() - P]);

  // apply transform
  string res = "";
  for (int i = 0; i < str.length(); i++) {
    string curr = "";
    if (i < ind_P) {
      curr = to_string(to_int(str[i]) + Pth);
    } else if (i == ind_P) {
      curr = to_string(Pth);
    } else {
      curr = to_string(abs(to_int(str[i]) - Pth));
    }
    cout << curr[curr.length() - 1];
  }

  cout << '\n';
  cout << Pth << '\n';

  return 0;
}
