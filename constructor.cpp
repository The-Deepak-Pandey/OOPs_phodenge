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

        Teacher(){
            cout << "Default constructor called!" << endl;
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
};

int main() {
    Teacher t1; // Default constructor is called here
    t1.name = "Deepak";
    t1.subject = "C++";
    t1.department = "Computer Science";

    cout << "Teacher Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.department << endl;

    return 0;
}