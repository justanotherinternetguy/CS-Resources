#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int temp {1};
    int ans {1};
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            ++temp;
        }
        
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
    
    cout << ans << '\n';
}

int main() {
    string s;
    cin >> s;
    
    solve(s);
    
    return 0;    
}
