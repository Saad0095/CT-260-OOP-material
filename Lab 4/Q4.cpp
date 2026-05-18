// By considering a scenario of your own choice, write a program to demonstrate
// the concept of constant keyword.

#include <iostream>
using namespace std;

class Student {
private:
  const int rollNumber;
  string name;
  float gpa;

public:
  Student(int r, string n, float g) : rollNumber(r), name(n), gpa(g) {}

  void updateGPA(float newGPA) { gpa = newGPA; }

  void display() const {
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Name: " << name << endl;
    cout << "GPA: " << gpa << endl;
  }

  int getRollNumber() const { return rollNumber; }
};

int main() {
  Student s1(245, "Saad", 3.8);

  s1.updateGPA(3.93);
  s1.display();

  return 0;
}