//Solving Diamond Problem through Virtual Inheritance
#include <iostream>
using namespace std;

class Employee {
public:
    int empID;

    void setID(int id) {
        empID = id;
    }
};

class Manager : virtual public Employee {};
class Engineer : virtual public Employee {};

class TechLead : public Manager, public Engineer {};

int main() {
    TechLead t;

    t.setID(101); // ? No ambiguity

    cout << "Employee ID: " << t.empID << endl;
}