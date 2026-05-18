//Demonstrating Diamond Problem arising due to Multiple Inheritance
#include <iostream>
using namespace std;

class Employee {
public:
    int empID;

    void setID(int id) {
        empID = id;
    }
};

class Manager : public Employee {};
class Engineer : public Employee {};

class TechLead : public Manager, public Engineer {};

int main() {
    TechLead t;

    // t.setID(101); // ? ERROR: ambiguous

    t.Manager::setID(101);   // OK
    t.Engineer::setID(202);  // OK

	// cout << "Manager ID: " << t.empID << endl; 	ERROR: ambiguous
	//cout << "Engineer ID: " << t.empID << endl; 	ERROR: ambiguous
    cout << "Manager ID: " << t.Manager::empID << endl;
    cout << "Engineer ID: " << t.Engineer::empID << endl;
}