#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int rev {0};

    if (x > 0) {
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }

    else if (x < 0) {
        while (x < 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }

    else if (x == 0) { return x; }
    return 0;
}


int main() {
    int x {-123};
    cout << reverse(x) << '\n';
}
