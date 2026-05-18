//Aggregation Example. Part Class object's reference is present in the Whole Class
#include <iostream>
#include <string>
using namespace std;

class Teacher{
	private:
		string name;
	public:
		Teacher(string a) : name(a){
		}
		string getName(){
			return name;
		}
};

class Department{
	private:
		string deptName;
		Teacher *tPtr;
	public:
		Department(string x) : deptName(x){
		}
		void addTeacher(Teacher* t){
			tPtr = t;
		}
		void displayDetails(){
			cout << "Department Name is: " << deptName << endl;
			cout << "Teacher Name is: " << tPtr->getName() << endl;
		}
};

int main(void){
	Teacher t1("Ahmed");
	Department d("CSIT");
	d.addTeacher(&t1);
	d.displayDetails();
}




