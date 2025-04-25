#include <iostream>
#include <string>
using namespace std;

class University_Student {
private:
    string name;
    string studentID;
    string department;
    float cgpa;

public:
    // Parameterized constructor
    University_Student(string n, string id, string dept, float gpa) {
        name = n;
        studentID = id;
        department = dept;
        cgpa = gpa;
    }

    // Copy constructor
    University_Student(const University_Student &student) {
        name = student.name;
        studentID = student.studentID;
        department = student.department;
        cgpa = student.cgpa;
    }

    // Function to display student information
    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Department: " << department << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    // Creating object using parameterized constructor
    University_Student student1("MD.Tawsif", "ET243114", "EEE", 3.67);

    // Creating object using copy constructor
    University_Student student2 = student1;

    cout << "Student 1 Info:" << endl;
    student1.displayInfo();

    cout << "\nStudent 2 Info (Copied):" << endl;
    student2.displayInfo();

    return 0;
}

