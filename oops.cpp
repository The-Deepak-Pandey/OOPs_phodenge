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

int main(){
    Teacher t1;
    t1.name = "Deepak";
    t1.subject = "C++";
    t1.department = "Computer Science";
    
    t1.setSalary(50000);

    cout << "Teacher Name: " << t1.name << endl;
    cout << "Salary: " << t1.getSalary() << endl;

    return 0;
}