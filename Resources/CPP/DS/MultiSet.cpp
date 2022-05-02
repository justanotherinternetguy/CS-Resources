#include <bits/stdc++.h>

using namespace std;

// DS

void printOut(vector<int> v) {
    for (auto i : v) {
        cout << i;    
    }
}

int main() {
    // multiset
    // O(log n)
    // DISTINCT ELEMENTS ALLOWED
    
    
    multiset<int> ms;
    ms.insert(3);
    ms.insert(2);
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    
    cout << ms.count(5) << "\n"; // 3
    ms.erase(ms.find(5)); // erase 1 instance of 5
    cout << ms.count(5) << "\n"; // 2
    
    ms.erase(5); // erase all instances
    cout << ms.count(5) << "\n";
    
    return 0;
}
