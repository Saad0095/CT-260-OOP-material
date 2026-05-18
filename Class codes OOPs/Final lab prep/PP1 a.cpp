#include <bits/stdc++.h>
using namespace std;

template <typename T> class Employee;
template <typename T> void updateSalary(Employee<T> &, T);

class PayrollException {
private:
  string msg;

public:
  PayrollException(string m) : msg(m) {}
  string what() { return msg; }
};

template <typename T> class Employee {
private:
  string name;
  int id;
  T salary;

public:
  Employee(string n, int i, T sal) : name(n), id(i), salary(sal) {}
  friend void updateSalary<T>(Employee<T> &, T);
  T getSalary() const { return salary; }
  void display() {
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
  }
};

template <typename T> class Payroll {
private:
  vector<Employee<T>> emp;

public:
  void addEmployee(Employee<T> e) { emp.push_back(e); }
  void sortBySal() {
    sort(emp.begin(), emp.end(), [](Employee<T> &e1, Employee<T> &e2) {
      return e1.getSalary() < e2.getSalary();
    });
  }
  void displayAll() {
    for (auto &e : emp) {
      e.display();
    }
  }
};

template <typename T> void updateSalary(Employee<T> &emp, T amount) {
  if (amount < 0) {
    throw PayrollException("Salary can't be negative!");
  }
  emp.salary = amount;
}

int main() {
  Payroll<double> sys;
  Employee<double> e1("Saad", 245, 105000);
  Employee<double> e2("Abdullah", 246, 110000);
  Employee<double> e3("Hassaan", 248, 100000);
  try {
    updateSalary(e1, 1200000.0);
  } catch (PayrollException &e) {
    cout << e.what() << endl;
  }
  sys.addEmployee(e1);
  sys.addEmployee(e2);
  sys.addEmployee(e3);
  cout << "\nAfter Salary Update:\n";
  e1.display();

  cout << "\nBefore Sorting:\n";
  sys.displayAll();

  sys.sortBySal();

  cout << "\nAfter Sorting:\n";
  sys.displayAll();
  return 0;
}