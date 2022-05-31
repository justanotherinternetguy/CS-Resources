#include <bits/stdc++.h>
using namespace std;

void count(vector<int> v, int n) {
  bitset<6> visited; // Also can use a vector<bool>
  // NOTE: The <value> in bitset must be manually changed to v.size()
  for (int i = 0; i < n ; i++) {
    if (visited[i] == 1) {
      continue;
    }

    int counter = 1;
    for (int j = i+1; j < n; j++) {
      if (v[j] == v[i]) {
        visited[j] = 1;
        counter++;
      }
    }
    cout << v[i] << ' ' << counter << '\n';
  }
}


int main(void) {
  vector<int> v {6, 4, 6, 3, 2, 2};
  count(v, v.size());
}
