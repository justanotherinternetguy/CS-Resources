#include <bits/stdc++.h>
using namespace std;

void display(vector<int> v) {
  for (auto i : v) cout << i << " ";
}

void reverse(vector<int> v, int start, int end) {
  // swap and move into the middle
  while (start < end) {
    swap(v[start], v[end]);
    start++;
    end--;
  }

  display(v);
}


int main(void) {
  vector<int> v {1, 2, 3, 4, 5, 6};
  int n = v.size();

  reverse(v, 0, n-1);
}
