
  
#include <bits/stdc++.h>
using namespace std;

int fib(int k) {
    if (k <= 1) {
        return k;
    }
    
    return fib(k-2) + fib(k-1);
}


int main() {
    int sum = 0;
    int k = 1;
    while (true) {
        if (fib(k) > 4000000) {
            break;
        }
        if (fib(k) % 2 == 0) {
            sum += fib(k);
        }
        k++;
    }
    
    cout << sum << "\n";
    return 0;
}
