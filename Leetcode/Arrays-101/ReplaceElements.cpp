#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& arr) {
    for (auto i : arr) {
        cout << i << ' ';
    }
}


void replaceElements(vector<int>& arr) {
    if (arr.size() <= 1) { arr[arr.size()-1] = -1; }

    int best {0};


    print(arr);
}


int main() {
    vector<int> arr {17, 18, 5, 4, 6, 1};
    replaceElements(arr);
}
