#include <bits/stdc++.h>
using namespace std;

int main() {
    // O(1) operations: add element to end, remove first element
    // lunch line: last in first out

    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    q.push(8);
    // [3, 2, 5, 8]

    cout << q.front() << "\n";

    q.pop();
    // [2, 5, 8]
    cout << q.front() << "\n";
}