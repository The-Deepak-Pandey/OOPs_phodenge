#include <bits/stdc++.h>
using namespace std;


class A {
    public : 
        int x;
        A(int x) {
            this->x = x;
        }

        void increment() {
            x++;
        }

        void display() {
            cout << "Value of x: " << x << endl;
        }
}

void func() {
    int x = 0;
    cout << "Inside func: " << x << endl;
    x++;
}

void func2() {
    static int y = 0; // Static variable retains its value between function calls
    cout << "Inside func2: " << y << endl;
    y++;
}

int main() {
    cout << "Calling func multiple times:" << endl;
    for (int i = 0; i < 3; i++) {
        func();
    }

    cout << "\nCalling func2 multiple times:" << endl;
    for (int i = 0; i < 3; i++) {
        func2();
    }

    cout << "\nDemonstrating class A:" << endl;

    A obj(5);
    obj.display(); // Display initial value of x
    obj.increment(); // Increment x
    obj.display(); // Display incremented value of x
    obj.increment(); // Increment x again
    obj.display(); // Display incremented value of x again


    return 0;
}