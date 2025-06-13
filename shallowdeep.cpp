#include<bits/stdc++.h>
using namespace std;

class Student_shallow {
    public:
        string name;
        double* cgpaPtr;

        Student_shallow(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double; // dynamically allocate memory for cgpa
            *cgpaPtr = cgpa; // assign value to the allocated memory
        }

        Student_shallow(const Student_shallow& other) {
            this->name = other.name;
            this->cgpaPtr = other.cgpaPtr; // shallow copy
            // Note: This is a shallow copy, both objects will point to the same cgpaPtr
        }

        void getInfo() {
            cout << "Name: " << name << ", CGPA: " << *cgpaPtr << endl;
        }
};

class Student_deep {
    public:
        string name;
        double* cgpaPtr;

        Student_deep(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double; // dynamically allocate memory for cgpa
            *cgpaPtr = cgpa; // assign value to the allocated memory
        }

        Student_deep(const Student_deep& other) {
            this->name = other.name;
            this->cgpaPtr = new double; // deep copy
            *(this->cgpaPtr) = *(other.cgpaPtr); // copy the value to a new memory location
        }

        void getInfo() {
            cout << "Name: " << name << ", CGPA: " << *cgpaPtr << endl;
        }
};

int main(){
    cout << "Shallow Copy Example:" << endl;
    Student_shallow s1("rahul kumar", 8.9);
    Student_shallow s2(s1); // shallow copy
    s1.getInfo();
    *(s2.cgpaPtr) = 9.0; // modifying the CGPA through s2
    s2.getInfo(); // this will also reflect in s1 due to shallow copy   
    cout << "After modifying s2's CGPA:" << endl;
    s1.getInfo(); // this will show the updated CGPA of s1 as well

    // basically if you modify the CGPA of s2, it will also modify the CGPA of s1 because both s1 and s2 share the same cgpaPtr memory location due to shallow copy.

    cout << "\nDeep Copy Example:" << endl;
    Student_deep d1("rahul kumar", 8.9);
    Student_deep d2(d1); // deep copy
    d1.getInfo();
    *(d2.cgpaPtr) = 9.0; // modifying the CGPA through d2
    d2.getInfo(); // this will not affect d1's CGPA
    cout << "After modifying d2's CGPA:" << endl;
    d1.getInfo(); // this will show the original CGPA of d1
    // in this case, modifying the CGPA of d2 does not affect d1 because d2 has its own cgpaPtr memory location due to deep copy.
    cout << "End of program." << endl;
    return 0;
}