#include <bits/stdc++.h>
using namespace std;

class Teacher {
    // properties or attributes
    string name;
    string department;
    string subject;
    double salary;

    // methods or member functions
    void changeDepartment(string newDepartment) {
        department = newDepartment;
    }
};

int main(){
    Teacher t1;
    t1.name = "Deepak";
    t1.subject = "C++";
    t1.department = "Computer Science";
    t1.salary = 25000;

    cout << "Teacher Name: " << t1.name << endl;

    return 0;
}