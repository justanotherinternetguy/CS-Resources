// collections of data / very primitve OOP
#include <bits/stdc++.h>
using namespace std;



struct testStruct{
    int testInt;
    string testStr;
}; 

// cannot leave an empty struct var
int main(void) {
    testStruct t;
    t.testInt = 45;
    t.testStr = "foo";
    cout << t.testInt << "\n";
    cout << t.testStr << "\n";
}