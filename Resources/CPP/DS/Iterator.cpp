#include <bits/stdc++.h>
using namespace std;

void printOut(vector<int> v) {
    for (auto i : v) {
        cout << i;
    }
}

int main() {
    // iterators
    // pointer for special / specific element
    
    // vector iter
    vector<int> v = {3, 2, 5, 8};
    sort(v.begin(), v.end());
    printOut(v);
    cout << "\n";
    
    reverse(v.begin(), v.end());
    printOut(v);
    cout << "\n";
    
    random_shuffle(v.begin(), v.end());
    printOut(v);
    cout << "\n";
    
    cout << "-----------------------" << "\n";
    
    // set iter
    set<int> s= {3, 2, 8, 5};
    auto it = s.begin(); // points to smallest item in the set
    cout << *it << "\n";
    
    it = s.end(); it--; // largest item in set
    cout << *it << "\n";
    
    return 0;
}
