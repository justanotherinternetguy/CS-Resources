#include <bits/stdc++.h>
using namespace std;


string intToRoman(int num) {
    map<string, int> m {};
    m["M"] = 1000;
    m["CM"] = 900;
    m["D"] = 500;
    m["CD"] = 400;
    m["C"] = 100;
    m["XC"] = 90;
    m["L"] = 50;
    m["XL"] = 40;
    m["X"] = 10;
    m["IX"] = 9;
    m["V"] = 5;
    m["IV"] = 4;
    m["I"] = 1;

    /* ------------------------------------------- */

    string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string res {""};

    for (int i = 0; i < 13; ++i) {
        while (num - values[i] >= 0) {
            res += str_romans[i];
            num -= values[i];
        }
    }
    return res;
}

int main() {
    int num {9};
    cout << intToRoman(num) << '\n';
}
