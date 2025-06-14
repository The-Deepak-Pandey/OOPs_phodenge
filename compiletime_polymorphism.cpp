#include <bits/stdc++.h>
using namespace std;

// Constructor overloading example
class Student { 
    public:
        string name;
        
        Student(){
            cout << "Non-parameterized constructor called!" << endl;
        }

        Student(string name) {
            cout << "Parameterized constructor called!" << endl;
            this->name = name;
        }
};

// Function overloading example
class Print{
    public:
        void display(int a) {
            cout << "Integer: " << a << endl;
        }

        void display(double b) {
            cout << "Double: " << b << endl;
        }

        void display(string c) {
            cout << "String: " << c << endl;
        }
};

// Operator overloading example
class Complex {
    public:
        double real, imag;

        Complex(double r = 0, double i = 0) : real(r), imag(i) {}

        // Overloading the '+' operator
        Complex operator+(const Complex& other) {
            Complex res;
            res.real = this->real + other.real;
            res.imag = this->imag + other.imag;
            return res;
        }

        void display() {
            cout << "Complex Number: " << real << " + " << imag << "i" << endl;
        }
};

int main(){
    cout << "Constructor Overloading Example:" << endl;
    Student s1;
    Student s2("John Doe");

    cout << "------------------------" << endl;

    cout << "Function Overloading Example:" << endl;
    Print p;
    p.display(10);          // Calls display(int a)
    p.display(10.5);       // Calls display(double b)
    p.display("Hello");    // Calls display(string c)
    cout << "------------------------" << endl;

    cout << "Operator Overloading Example:" << endl;
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);
    Complex c3 = c1 + c2; // Using overloaded '+' operator
    c1.display(); // Displaying first complex number
    c2.display(); // Displaying second complex number
    c3.display(); // Displaying result of addition
    cout << "------------------------" << endl;
    cout << "End of examples." << endl;

    return 0;
}