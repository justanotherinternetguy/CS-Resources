#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n = 2520; // already found
    bool done = false;
    
    while (!done) {
        n += 2520;
        bool isDiv = true;
        
        for (int a = 11; a <= 20; a++) {
            if (n % a != 0) {
                isDiv = false;
                break;
            }
        }
        
        if (isDiv) {
            done = true;    
        }
    }
    cout << n << '\n';
}

int main() {
    solve();
}
