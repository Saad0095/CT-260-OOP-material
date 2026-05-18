//4_2 - Employee Class with a constant attribute
#include <iostream>
#include <string.h>
using namespace std;

class Employee{
	private:
		const int ID;
		string name;
	public:
		Employee() : ID(1),name("Ahmad"){ }
		Employee(int x, string y) : ID(x), name(y) { }
		
//		will have to remove this mutator as constant attribute can not be modified
//		void setID(int x){ 
//			id = x;
//		}
		void setName(string y){
			name = y;
		}
		int getID(){
			return ID;
		}
		string getName(){
			return name;
		}
};

int main(void){
	Employee e1;
	Employee e2(101,"Abdullah");
	cout << "Employee One ID is: " << e1.getID() << endl;
	cout << "Employee One Name is: " << e1.getName() << endl;
	
	cout << "Employee Two ID is: " << e1.getID() << endl;
	cout << "Employee Two Name is: " << e1.getName() << endl;
	return 0;
}