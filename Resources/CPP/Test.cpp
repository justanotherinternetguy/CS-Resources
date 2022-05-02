#include <bits/stdc++.h>

using namespace std;


int main() {
    // mulitply by 2, 4, 6, 8, etc..
    int a = 5;
    a <<= 1; // *2
    cout << a << "\n"; // 10
    a <<= 2; // *4
    cout << a << "\n"; // 40
    
    
    // char upper --> lower
    char ch = 'B';
    ch |= ' ';
    cout << ch << "\n"; // b
    
    
    // check if 32 bit int is power of 2
    int x = 32; //yes
    if (x && !(x & (x-1))) {
        cout << "yes" << "\n";
    }
    
    else {
        cout << "no" << "\n";
    }
    
    vector<int> v = {3, 2, 6, 7};
    for (auto i : v) {
        cout << i;
    }
    cout << "\n";
    
    
    
    return 0;
}
