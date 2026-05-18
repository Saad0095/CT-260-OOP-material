#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Parameterized constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    // Copy constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
    }

    // Display function
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name   : " << name << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Temporary variables for input
    int roll;
    string name;

    // Create array of object pointers
    Student* students[n];

    // Take user input and create objects using parameterized constructor
    for (int i = 0; i < n; i++) {
        cout << "\nEnter data for student " << i + 1 << endl;

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        students[i] = new Student(roll, name);  // Parameterized constructor
    }

    cout << "\n--- Student Details (Using Copy Constructor) ---\n";

    // Create copy of each object and display
    for (int i = 0; i < n; i++) {
        Student copyStudent = *students[i];  // Copy constructor called
        copyStudent.display();
    }

    return 0;
}
