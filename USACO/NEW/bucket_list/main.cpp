#include <bits/stdc++.h>
using namespace std;

struct Cow {
  int si, bi, ti;
};

bool operator<(const Cow& c1, const Cow& c2) {
  return c1.si < c2.si;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  freopen("./blist.in", "r", stdin);
  freopen("./blist.out", "w", stdout);

  int n;
  cin >> n;

  vector<Cow> cows(n);

  for (int i = 0; i < n; i++) {
    cin >> cows[i].si >> cows[i].ti >> cows[i].bi;
  }
  sort(cows.begin(), cows.end());

  return 0;
}
