#include <bits/stdc++.h>
using namespace std;


class A {
    public : 
        int deepu;
        A(int deepu) {
            this->deepu = deepu;
        }

        void increment() {
            deepu++;
        }

        void display() {
            cout << "Value of deepu: " << deepu << endl;
        }
};

class B {
    public :
        int deepuB;
        
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
    obj.display(); // Display initial value of deepu
    obj.increment(); // Increment deepu
    obj.display(); // Display incremented value of deepu
    obj.increment(); // Increment deepu again
    obj.display(); // Display incremented value of deepu again


    return 0;
}