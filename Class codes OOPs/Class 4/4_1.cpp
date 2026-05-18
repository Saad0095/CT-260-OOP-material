//4_1 - Employee Class
#include <iostream>
#include <string.h>
using namespace std;

class Employee{
	private:
		int id;
		string name;
	public:
		Employee(){
			id = 1;
			name = "employee";
		}
		void setID(int x){
			id = x;
		}
		void setName(string y){
			name = y;
		}
		int getID(){
			return id;
		}
		string getName(){
			return name;
		}
};

int main(void){
	Employee e1;
	e1.setID(100);
	e1.setName("Ahmad");
	cout << "Employee ID is: " << e1.getID() << endl;
	cout << "Employee Name is: " << e1.getName() << endl;
	return 0;
}