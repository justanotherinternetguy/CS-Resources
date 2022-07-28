#include <bits/stdc++.h>
using namespace std;


// logic gates
// 0, 0 = 0
// 1, 1 = 0
// 1, 0 = 0
// XOR


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n1;
	long long n2;

	cin >> n1;
	cin >> n2;
	string str_n1 = to_string(n1);
	string str_n2 = to_string(n2);
	string res = "";

	for (int i = 0; i < str_n1.size(); i++) {
		if (str_n1[i] == str_n2[i]) {
			res += "0";
		} else {
			res += "1";
		}
	}

	int result = stoi(res);
	cout << result << '\n';

	return 0;
}
