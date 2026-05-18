//4_8 - An Array of Employee objects instantiated with parameterized constructor
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
	Employee arr[] = {Employee(1,"Ahmed"),Employee(2,"Abdullah"),Employee(3,"Bilal")};
	for(int i=0;i<3;i++){
		cout << "Employee " << i+1 << " ID is: " << arr[i].getID() << endl;
		cout << "Employee " << i+1 << " Name is: " << arr[i].getName() << endl;
	}
	return 0;
}