#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v) {
    for (auto i : v) {
        cout << i << ',';
    }
    cout << '\n';
}

int main() {
    vector<int> v;
    // append
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    print(v);
    cout << "size: " << v.size() << '\n';

    // iterator
    auto head = v.begin();
    auto tail = v.end();
    tail--;
    cout << "first item: " << *head << '\n';
    cout << "last item: " << *tail << '\n';


    auto rbeg = v.rbegin();
    auto rend = v.rend();
    rend--;
    cout << "last item w/ rbegin: " << *rbeg << '\n';
    cout << "first item w/ rend: " << *rend << '\n';
}
