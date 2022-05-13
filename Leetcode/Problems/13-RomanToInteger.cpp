#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    map<char, int> m {};
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int res {0};
    for (int i = 0; i < s.size(); i++) {
        int it1 {m[s[i]]};

        if (i+1 < s.size()) {
            int it2 {m[s[i+1]]};

            if (it1 >= it2) {
                res += it1;
            } else {
                res = res + it2 - it1;
                i++;
            }
        }

        else {
            res += it1;
        }
    }
    return res;
}

int main() {
    string s = "III";
    cout << romanToInt(s) << '\n';
}
