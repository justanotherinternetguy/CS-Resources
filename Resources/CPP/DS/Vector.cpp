#include <bits/stdc++.h>

using namespace std;

// DS

void printOut(vector<int> v) {
    for (auto i : v) {
        cout << i;    
    }
}

int main() {
    // vector - dynamic array
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    cout << v.back() << "\n";
    
    printOut(v);
    cout << "\n";
    
    v.pop_back();
    
    printOut(v);
    cout << "\n";
    
    sort(v.begin(), v.end());
    
    printOut(v);
    cout << "\n";
    
    return 0;
}
