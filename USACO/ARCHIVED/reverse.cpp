#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m; // n = INPUT, m = LINES/cases
        
        vector<int> ins;
        vector<int> outs;
        
        
        int z = 0; // 0 = OK, 1 = LIE
        
        cin >> n >> m;

        for (int a = 0; a < m; a++) {
            int in, out;
            cin >> in >> out;

            ins.push_back(in);
            outs.push_back(out);
        }



        if (z == 0) {
            cout << "OK" << '\n';
        } else {
            cout << "LIE" << '\n';
        }
    }

    return 0;
}
