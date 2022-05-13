#include <bits/stdc++.h>
using namespace std;
// selection sort

void slsort(vector<int> v) {
    int len = v.size();
    int min_index {0};
    for (int i = 0; i < len; i++) {
        min_index = i;
        for (int j = i+1; j < len; j++) {
            if (v[j] < v[min_index]) {
                min_index = j;
            }
            swap(v[min_index], v[i]);
        }
    }

    for (auto a : v) {
        cout << a << ' ';
    }
}


int main() {
    vector<int> v {5, 4, 3, 2, 1};
    slsort(v);
}
