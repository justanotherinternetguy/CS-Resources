#include <bits/stdc++.h>

using namespace std;

int N = 300;

int solve(string first, string second, string third) {
  // lmao its c++ its fast enough
  char res;
  int res_int;
  for (int i = 0; i < first.size(); i++) {
    for (int j = 0; j < second.size(); j++) {
      for (int k = 0; k < third.size(); k++) {
        if (first[i] == second[j] && first[i] == third[k]) {
          res = first[i];
        }
      }
    }
  }

  res_int = (int)res;

  if (res_int >= (int)'a' && res_int <= (int)'z') {
    return res_int - 96;
  } else {
    return res_int - 38;
  }

  return -1;
}

int main() {
  freopen("main.txt", "r", stdin);
  string lines[N];

  for (int i = 0; i < N; ++i) {
    cin >> lines[i];
  }

  // string first = lines[0];
  // string second = lines[1];
  // string third = lines[2];
  // cout << solve(first, second, third) << '\n';

  int res = 0;

  for (int i = 0; i < N; i += 3) {
    string first = lines[i];
    string second = lines[i + 1];
    string third = lines[i + 2];
    res += solve(first, second, third);
  }
  cout << res << '\n';

  return 0;
}
