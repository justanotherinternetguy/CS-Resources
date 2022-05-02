#include <bits/stdc++.h>
using namespace std;

int main() {
    // map, dict in py
    // key --> value pair
    
    map<string, int> m;
    
    m["foo"] = 5;
    m["bar"] = 2;
    m["spam"] = 3;
    m["eggs"] = 8;
    
    cout << m["bar"] << "\n"; // 2
    
    cout << m.count("spam") << "\n";  // 1
    cout << m.count("coffee") << "\n"; // 0
    
    for (auto i : m) {
        cout << i.first << ", " << i.second << "\n";        
    }

    return 0;
}
