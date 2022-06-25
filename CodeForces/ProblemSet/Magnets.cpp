#include <bits/stdc++.h>
using namespace std;

void soln(vector<int> magnets) {
  int n = magnets.size();
  int res {0};
  for (int i = 1; i < n; i++) {
    if (magnets[i] == magnets[i-1]) {
      continue;
    }

    else {
      res++;
    }
  }
  res++;
  cout << res << '\n';
}

void test() {
  cout << "hi";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 1 - minus
  // 0 - plus

  int tc;
  cin >> tc;
  vector<int> magnets;
  for (int i = 0; i < tc; i++) {
    int temp;
    cin >> temp;
    magnets.push_back(temp);
  }

  soln(magnets);
}
