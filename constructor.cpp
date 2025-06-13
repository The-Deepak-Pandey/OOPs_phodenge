#include <bits/stdc++.h>
using namespace std;

class Teacher {
    private:
        double salary;

    public:
        // properties or attributes
        string name;
        string department;
        string subject;


        Teacher(){ // non-parameterized constructor
            cout << "Non-parameterized constructor called!" << endl;
            department = "Computer Science"; // default value
        }

        Teacher(string n, string department, string s, double sal) { // parameterized constructor
            cout << "Parameterized constructor called!" << endl;
            name = n;
            this->department = department; // using 'this' pointer to avoid ambiguity
            subject = s;
            salary = sal;
        }

        Teacher(const Teacher &t) { // copy constructor
            cout << "Copy constructor called!" << endl;
            this->name = t.name;
            this->department = t.department;
            this->subject = t.subject;
            this->salary = t.salary;
        }

        // methods or member functions
        void changeDepartment(string newDepartment) {
            department = newDepartment;
        }

        void setSalary(double newSalary) { // setter method
            salary = newSalary;
        }

        double getSalary() {  // getter method
            return salary;
        }

        void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Department: " << department << endl;
            cout << "Subject: " << subject << endl;
            cout << "Salary: " << salary << endl;
            cout << "------------------------" << endl;
        }
};

int main() {
    
    Teacher teacher1("John Doe", "Mathematics", "Algebra", 50000.0); // using parameterized constructor
    teacher1.displayInfo();

    Teacher teacher2; // using non-parameterized constructor
    teacher2.name = "Jane Smith";
    teacher2.subject = "Physics";
    teacher2.setSalary(55000.0);
    teacher2.displayInfo();

    Teacher teacher3(teacher1); // using copy constructor
    teacher3.displayInfo();

    return 0;
}