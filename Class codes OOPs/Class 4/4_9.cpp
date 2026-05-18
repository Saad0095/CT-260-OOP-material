//4_9 - An Array of Pointers to Employee objects
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
	Employee* arr[3];
	//Each pointer is used to have address of a new object instantiated using default constructor
	for(int i=0;i<3;i++){
		arr[i] = new Employee();
	}
	//Every pointer is used to have address of a new object instantiated differently
	//arr[0] = new Employee();
	//arr[1] = new Employee(111,"Bilal");
	//arr[2] = new Employee(222,"Zohaib");
		
	for(int i=0;i<3;i++){
		cout << "Employee " << i+1 << " ID is: " << arr[i]->getID()<< endl;
		cout << "Employee " << i+1 << " Name is: " << arr[i]->getName()<< endl;
	}
	for(int i=0;i<3;i++){
		delete arr[i];
	}
	return 0;
}