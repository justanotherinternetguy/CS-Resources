#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void display(Node* n) {
    while (n != nullptr) {
        cout << n -> data << ' ';
        n = n -> next;
    }
}

int main(void) {
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;
  
    head = new Node();
    second = new Node();
    third = new Node();


    // assign and link
    head -> data = 1;
    head -> next = second;
  
    second -> data = 2;
    second -> next = third;
  
    third -> data = 3;
    third -> next = nullptr;
  
    display(head);


    return 0;
}
