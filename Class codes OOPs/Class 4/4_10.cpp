//4_10 - A Pointer to an array of Employee objects
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
	Employee* arr = new Employee[3];
	
	for(int i=0;i<3;i++){
		cout << "Employee " << i+1 << " ID is: " << arr[i].getID()<< endl;
		cout << "Employee " << i+1 << " Name is: " << arr[i].getName()<< endl;
	}

	delete arr;

	return 0;
}