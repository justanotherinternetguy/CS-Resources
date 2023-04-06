#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

vector<int> perWordFreq(string word) {
  vector<int> freq(26, 0);
  for (int i = 0; i < word.length(); i++) {
    int curr = (int)word[i] - (int)'a';
    freq[curr]++;
  }
  return freq;
}

vector<int> addFreq(vector<int> res, vector<int> one, vector<int> two) {
  for (int i = 0; i < res.size(); i++) {
    res[i] += max(one[i], two[i]);
  }
  return res;
}

int main() {
  freopen("blocks.in", "r", stdin);
  freopen("blocks.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> res(26);

  for (int i = 0; i < n; i++) {
    string first, second;
    cin >> first >> second;
    res = addFreq(res, perWordFreq(first), perWordFreq(second));
  }

  for (auto x : res) {
    cout << x << '\n';
  }

  return 0;
}
