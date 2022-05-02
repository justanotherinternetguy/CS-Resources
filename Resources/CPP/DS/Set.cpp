#include <bits/stdc++.h>

using namespace std;

// DS

void printOut(vector<int> v) {
    for (auto i : v) {
        cout << i;    
    }
}

int main() {
    // set - collection of elements, insertion, search, rm 
    // O(log n)
    // ALL ELEMENTS ARE DISTINCT
    
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(8);
    cout << s.count(3) << "\n"; // # of times 3 appears in s
    cout << s.count(1) << "\n";
    
    s.erase(3);
    cout << s.count(3) << "\n";
    
    s.insert(4);
    cout << s.size() << "\n";
    
    for (auto i : s) {
        cout << i;
    }
    cout << "\n";
    return 0;
}
