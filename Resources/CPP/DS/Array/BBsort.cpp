#include <bits/stdc++.h>
using namespace std;
// vector bbsort

void bbsort(vector<int> v) {
    int len = v.size();
    
    // swap(v[0], v[1]);
    
    for (int i {0}; i < len; i++) {
        for (int j {0}; j < len-i-1; j++) {
            swap(v[j], v[j+1]);
        }
    }
    
    for (auto a : v) {
        cout << a << ' ';
    }
}

int main() {
    vector<int> v {6, 5, 4, 3, 2, 1};
    bbsort(v);
}
