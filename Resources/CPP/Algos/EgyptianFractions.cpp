// Greedy algorithm for finding egyptian fractions
#include <bits/stdc++.h>
using namespace std;

void search(int nr, int dr) {
    // if nr || dr == 0: (0 or not fraction)
    if (dr == 0 || nr == 0)
        return;
    
    // simplify fractino if d | n
    if (dr%nr == 0) {
        cout << "1/" << dr/nr << "\n";
        return;
    }

    // if n | d: is not fraction
    if (nr%dr == 0) {
        cout << nr/dr << "\n";
        return;
    }
 
    // if nr > dr, start to simplify
    if (nr > dr)
    {
        cout << nr/dr << " + ";
        search(nr%dr, dr);
        return;
    }
 
    int n = dr/nr + 1;
    cout << "1/" << n << " + ";
 
    // recurse
    search(nr * n - dr, dr * n);
 }
 
int main() {
    int nr, dr;
    cin >> nr >> dr;
    search(nr, dr);
    return 0;
}