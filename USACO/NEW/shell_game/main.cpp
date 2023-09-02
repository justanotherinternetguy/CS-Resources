#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
  freopen("./shell.in", "r", stdin);
  freopen("./shell.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> shell(3);
  for (int i = 0; i < 3; i++) {
    shell[i] = i;
  }

  vector<int> count(3);

  for (int i = 0; i < n; i++) {
    int a, b, g;
    cin >> a >> b >> g;
    a--;b--;g--;
    swap(shell[a], shell[b]);
    count[shell[g]]++;
  }

  cout << max(count[0], max(count[1], count[2]));

  return 0;
}
