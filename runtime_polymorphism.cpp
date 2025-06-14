#include <bits/stdc++.h>
using namespace std;

// Function overriding example
class Parent {
    public:
        void getInfo() {
            cout << "Parent class info" << endl;
        }
};

class Child : public Parent {
    public:
        void getInfo() { // This function overrides the Parent class method
            cout << "Child class info" << endl;
        }
};

// Virtual function example
class Base {
    public:
        void getInfo() {
            cout << "Base class info" << endl;
        }

        virtual void hello() {
            cout << "Hello from Base class" << endl;
        }
};

class Derived : public Base {
    public:
        void getInfo() {
            cout << "Derived class info" << endl;
        }

        void hello() { // This function overrides the Base class method
            cout << "Hello from Derived class" << endl;
        }
};

int main(){
    Child c1;
    c1.getInfo(); 

    Derived d1;
    d1.getInfo();
    d1.hello();
    return 0;
}