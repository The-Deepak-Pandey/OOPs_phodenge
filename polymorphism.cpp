#include <bits/stdc++.h>
using namespace std;

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

int main(){
    Student s1;
    Student s2("John Doe");
    return 0;
}