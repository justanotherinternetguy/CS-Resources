#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  string in[N];
  for (int i = 0; i < N; i++) {
      cin >> in[i];
  }
  cout << in;
}
