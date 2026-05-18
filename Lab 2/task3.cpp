#include <iostream>
#include <cstring>

using namespace std;

class Employee {
private:
  char *firstName;
  string lastName;
  int salary;

public:
  Employee() {
    firstName = new char[50];
    salary = 0;
  }
  void setFirstName(const char *name) { strcpy(firstName, name); }
  void setLastName(string name) { lastName = name; }
  void setSalary(int sal) {
    if (sal < 0) {
      salary = 0;
    } else {
      salary = sal;
    }
  }
  char *getFirstName() { return firstName; }
  string getLastName() { return lastName; }
  int getMonthlySalary() { return salary; }
  int getYearlySalary() { return salary * 12; }
  void raiseSalary() { salary += salary * 0.1; }
};

int main() {
  Employee e1, e2;
  char firstName[50];
  string lastName;
  int salary;

  cout << "Enter first name of employee 1: ";
  cin >> firstName;
  cout << "Enter last name of employee 1: ";
  cin >> lastName;
  cout << "Enter salary of employee 1: ";
  cin >> salary;
  e1.setFirstName(firstName);
  e1.setLastName(lastName);
  e1.setSalary(salary);

  cout << "Enter first name of employee 2: ";
  cin >> firstName;
  cout << "Enter last name of employee 2: ";
  cin >> lastName;
  cout << "Enter salary of employee 2: ";
  cin >> salary;
  e2.setFirstName(firstName);
  e2.setLastName(lastName);
  e2.setSalary(salary);

  cout << e1.getFirstName()
       << "'s salary yearly before raise: " << e1.getYearlySalary() << endl;
  cout << e2.getFirstName()
       << "'s salary yearly before raise: " << e2.getYearlySalary() << endl;

  e1.raiseSalary();
  e2.raiseSalary();

  cout << e1.getFirstName()
       << "'s salary yearly after raise: " << e1.getYearlySalary() << endl;
  cout << e2.getFirstName()
       << "'s salary yearly after raise: " << e2.getYearlySalary() << endl;

  return 0;
}