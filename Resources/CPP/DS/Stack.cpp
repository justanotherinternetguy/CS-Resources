#include <bits/stdc++.h>
using namespace std;

int main() {
    // O(1) operation for adding to top and removing from top
    // stack of plates - first in first out

    stack<int> st;
    st.push(3);
    st.push(2);
    st.push(5);
    st.push(8);
    // [8, 5, 2, 3]
    cout << st.top() << "\n";
    st.pop();
    // [5, 2, 3]
    cout << st.top() << "\n";
}