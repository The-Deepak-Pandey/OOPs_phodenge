#include <bits/stdc++.h>
using namespace std;

class Person {
    public:
        string name;
        int age;

        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        Person(){

        }

        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public Person {
    public:
        int rollNumber;

        Student(string name, int age, int rollNumber) : Person(name, age) {
            this->rollNumber = rollNumber;
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll Number: " << rollNumber << endl;
        }

};

int main(){
    Student s1("John Doe", 20, 101);
    s1.getInfo();

    Person p1("Jane Doe", 22);
    p1.getInfo();

    // Demonstrating inheritance
    Student s2 = s1; // Copying student object
    s2.name = "Alice Smith"; // Changing name of copied object
    s2.getInfo(); // Displaying info of copied object
    p1.getInfo(); // Displaying info of original person object
    s1.getInfo(); // Displaying info of original student object
    
    return 0;
}