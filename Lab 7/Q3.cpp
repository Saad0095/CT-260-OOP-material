#include <iostream>
using namespace std;

class Payroll;

class Employee {
private:
  string name;
  string id;
  string designation;
  double salary;

public:
  Employee(string n, string i, string d, double s)
      : name(n), id(i), designation(d), salary(s) {}
  void display() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Designation: " << designation << endl;
    cout << "Salary: Rs " << salary << endl;
  }

  friend class Payroll;
};

class Payroll {
public:
  void updateSalary(Employee &e, double amount) {
    e.salary = amount;
    cout << "Updated Salary: Rs " << e.salary << endl;
  }
};

int main() {
  Employee emp1("Saad", "101", "Developer", 50000);

  emp1.display();

  Payroll p;
  p.updateSalary(emp1, 65000);
  return 0;
}