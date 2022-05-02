#include <bits/stdc++.h>
using namespace std;

int main() {
    // dynamic array
    // functions: not just push_back and pop_front
    // also has push_front and pop_front

    deque<int> d;
    d.push_back(5);
    d.push_back(3); // [5, 3]
    d.push_front(9); // [9, 5, 3]
    d.push_front(1); // [1, 9, 5, 3]

    for (int i = 0; i < d.size(); i++) {
        cout << d[i];
    }
    cout << "\n";

    d.pop_front(); // [9, 5, 3];
    auto it = d.begin();
    cout << *it << "\n";
}