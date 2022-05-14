#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v) {
    for (auto i : v) {
        cout << i << ' ';
    }
}

void BBsort(vector<int> v) {
    int len = v.size();

    for (int i = 0; i < len-1; i++) {
        for (int j = 0; j < len-i-1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }
}


int main() {
    vector<int> v {6, 5, 4, 3, 2, 1};
    BBsort(v);
    printVec(v);
    cout << '\n';


    return 0;
}
