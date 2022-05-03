#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define all(x) x.begin(), x.end()
#define FLP(i, a, b) for (int i = a; i <= b; i++)

typedef vector<int> vi;



int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int rounds;
    cin >> rounds;
    

    // 1 ab --> 650 zy

    for (int i = 0; i < rounds; i++) {
        string s;
        cin >> s;
        int res = 0;

        // (int) - 96
        res += ((int) s[0] - 96);
        res += ((int) s[1] - 98);

        cout << res << "\n";


    }
	return 0;
}
