#include <bits/stdc++.h>
using namespace std;



void printVec(vector<int> v) {
    for (auto i : v) {
        cout << i << ' ';
    }
}


int main() {
    vector<int> v {5, 4, 3, 2, 1};
    printVec(v);
    cout << '\n';
    v.push_back(8);
    v.push_back(9);
    


    // back
    auto itEnd = v.end();
    itEnd--;
    auto itBack = v.back();

    cout << *itEnd << itBack << v[v.size()-1] << '\n';

    sort(v.begin(), v.end());
    printVec(v);
}

