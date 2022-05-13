#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    
    long long int n {0}, in {0}, sum {0};
    cin >> n;
    
    for (int i = 0; i < n-1; i++) {
        cin >> in;
        sum += in;
    }
    cout << (n*(n+1))/2 - sum << '\n';
    
    return 0;
}
