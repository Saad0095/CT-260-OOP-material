//4_4 - Employee Class with object instantiated as constant
#include <iostream>
#include <string.h>
using namespace std;

class Employee{
	private:
		int id;
		string name;
	public:
		Employee() : id(1),name("Ahmad"){ }
		Employee(int x, string y) : id(x), name(y) { }
		

		void setID(int x){ 
			id = x;
		}
		void setName(string y){
			name = y;
		}
		int getID() const{
			return id;
		}
		string getName() const{
			return name;
		}
};

int main(void){
	const Employee e1;
	const Employee e2(101,"Abdullah");
	cout << "Employee One ID is: " << e1.getID() << endl;
	cout << "Employee One Name is: " << e1.getName() << endl;
	
	cout << "Employee Two ID is: " << e2.getID() << endl;
	cout << "Employee Two Name is: " << e2.getName() << endl;
	return 0;
}