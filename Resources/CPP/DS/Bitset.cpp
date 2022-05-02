#include <bits/stdc++.h>
using namespace std;

int main() {
    // bitset - value is either 0 or 1
    bitset<10> bt;
    bt[1] = 1;
    bt[3] = 1;
    bt[6] = 1;
    bt[9] = 1;
    bt[10] = 1;
    bt[11] = 1;

    for (int i = 0; i < bt.size(); i++) {
        cout << bt[i];
    }
    cout << "\n";

    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));

    cout << a.count() << "\n"; // 5 - five 1s
    // bit mani
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110
}