#include <bits/stdc++.h>
using namespace std;

int main() {
    string alpha, john;
    cin >> alpha >> john;
    string cons = "";

    for (int hums = 1; true; hums++) {
        cons += alpha;
        int idx = 0;
        for (int i = 0; i < cons.size() && idx < john.size(); i++) {
            if (cons[i] == john[idx]) {
                idx++;
            }
        }
        if (idx == john.size()) {
            cout << hums << '\n';
            return 0;
        }
    }
}
