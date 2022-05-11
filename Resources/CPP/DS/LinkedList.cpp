#include <bits/stdc++.h>
using namespace std;

// each value of LL points to next value


class Node {
    public:
        int value;
    Node *next;
};

int main() {
    Node* head = NULL;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // alloc 3 nodes in heap
    one = new Node();
    two = new Node();
    three = new Node();

    // value assign
    one -> value = 1;
    two -> value = 2;
    three -> value = 3;

    // connect nodes
    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    // print
    head = one;
    while (head != NULL) {
        cout << head -> value << " ";
        head = head -> next;
    }
    return 0;
}
