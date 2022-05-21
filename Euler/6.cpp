#include <bits/stdc++.h>
using namespace std;

void solve() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum+=i;
    }
    sum = sum*sum;
    
    int also = 0;
    for (int j = 1; j <= 100; j++) {
        also += (j*j);
    }
    
    cout << sum-also << '\n';
}

int main() {
    solve();
}
