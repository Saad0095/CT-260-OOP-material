#include <cstring>
#include <iostream>
using namespace std;
class Employee {
private:
  char *EmployeeName;
  const int EmployeeId;

public:
  Employee(const char *name, int id) : EmployeeId(id) {
    EmployeeName = new char[strlen(name) + 1];
    strcpy(EmployeeName, name);
  }
  void setName(const char *name) {
    delete[] EmployeeName;
    EmployeeName = new char[strlen(name) + 1];
    strcpy(EmployeeName, name);
  }
  const char *getName() const { return EmployeeName; }
  int getId() const { return EmployeeId; }
};
int main() {
  Employee Employee1("Ali", 101);
  Employee Employee2("Ahmed", 102);
  Employee Employee3("Mahad", 105);
  Employee1.setName("Hassaan");

  cout << "Employee 3:" << endl;
  cout << "Employee Id is: " << Employee3.getId() << endl;
  cout << "Employee name is: " << Employee3.getName() << endl;

  return 0;
}
