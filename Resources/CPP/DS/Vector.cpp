#include <bits/stdc++.h>

using namespace std;

// DS

int main() {
    // vector - dynamic array
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    cout << v.back() << "\n";
    
    for (auto i : v) {
        cout << i;
    }
    cout << "\n";
    
    v.pop_back();
    
    for (auto i : v) {
        cout << i;
    }
    cout << "\n";
    
    sort(v.begin(), v.end());
    
    for (auto i : v) {
        cout << i;
    }
    cout << "\n";
    
    return 0;
}
