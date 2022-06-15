// OOP test with c++
// DRY
#include <bits/stdc++.h>
using namespace std;

class Person {
    private:
        string address;

    public:
        string firstName;
        string lastName;
        int age;

        void greet();
        void ask(string yourName);

        // constructor - Done when a new object is created
        Person() {
            cout << "Hello, world!" << "\n";
        }

        void setAddress(string s) {
            address = s;
        }

        string getAddress() {
            return address;
        }

};


void Person::greet() {
    cout << "hi, my name is: " << firstName << '\n';
}

void Person::ask(string yourName) {
    cout << "How are you, " << yourName << '?' << '\n';
}


int main(void) {
    Person p1;
    p1.firstName = "John";
    p1.lastName = "Doe";
    p1.age = 13;

    p1.greet();
    p1.ask("foo");

    p1.setAddress("Willow Street");
    cout << p1.getAddress() << '\n';


    return 0;
}