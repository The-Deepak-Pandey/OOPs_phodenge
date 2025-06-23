#include <bits/stdc++.h>
using namespace std;    

// Abstract class example
class abstractShape {
    public:
        virtual void draw() = 0; // Pure virtual function, making this class abstract
};

class Circle : public abstractShape {
    public:
        void draw() {
            cout << "Drawing Circle" << endl;
        }
};