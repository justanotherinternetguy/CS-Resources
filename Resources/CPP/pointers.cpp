// learning pointers, stuff like that
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // reference
    string r1 = "foo";
    string &r2 = r1;

    cout << r1 << ' ' << r2 << "\n"; // same thing


    // memory address
    cout << &r2 << '\n';    



    // pointers store the MEMORY ADDRESS AS ITS VALUE

    string* ptr = &r1;
    *ptr = "changed";
    cout << &r1 << "\n";

    cout << &r1 << ' ' << ptr << ' ' << *ptr << "\n";
}