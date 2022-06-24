#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

string createPhoneNumber(const int arr [10]){
  vector<string> strNums{};

  for (int i = 0; i < 10; i++) {
    strNums.push_back(to_string(arr[i]));
  }
  strNums.insert(begin(strNums), "(");
  strNums.insert(begin(strNums) + 4, ")");
  strNums.insert(begin(strNums) + 5, " ");
  strNums.insert(begin(strNums) + 9, "-");

  stringstream ss;

  for (auto it = strNums.begin(); it != strNums.end(); it++) {
    if (it != strNums.begin()) {
      ss << "";
    }
    ss << *it;
  }
  return ss.str();
}
