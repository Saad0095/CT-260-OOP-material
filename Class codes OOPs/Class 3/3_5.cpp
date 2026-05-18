//Understanding issues with default copy constructor
#include <iostream>
#include <string.h>
using namespace std;

class Student{
	private:
		int ID;
		string name;
		double* cgpa;		
	public:
		Student(){
			ID = 1;
			name = "student";
			cgpa = new double;
			*cgpa = 1.0;
		}
		Student(int x, string y, double z){
			ID = x;
			name = y;
			cgpa = new double;
			*cgpa = z;
		}
		void setID(int x){
			ID = x;
		}
		void setName(string z){
			name = z;
		}
		void setCGPA(double y){			
			*cgpa = y;
		}		
		int getID(){
			return ID;
		}
		string getName(){
			return name;
		}
		double getCGPA(){
			return *cgpa;
		}		
};


int main(void){
	Student std1(101,"Ahmad",3.5);
	Student std2 = std1;
	
	cout << "Before Modification" << endl << endl;
	cout << "Student One ID is: " << std1.getID() << endl;
	cout << "Student One Name is: " << std1.getName() << endl;
	cout << "Student One CGPA is: " << std1.getCGPA() << endl << endl;
	
	cout << "Student Two ID is: " << std2.getID() << endl;
	cout << "Student Two Name is: " << std2.getName() << endl;
	cout << "Student Two CGPA is: " << std2.getCGPA() << endl << endl;
	
	std1.setName("Abdullah");
	std1.setCGPA(3.9);
	
	cout << "After Modification" << endl << endl;
	cout << "Student One ID is: " << std1.getID() << endl;
	cout << "Student One Name is: " << std1.getName() << endl;
	cout << "Student One CGPA is: " << std1.getCGPA() << endl << endl;
	
	cout << "Student Two ID is: " << std2.getID() << endl;
	cout << "Student Two Name is: " << std2.getName() << endl;
	cout << "Student Two CGPA is: " << std2.getCGPA() << endl << endl;	
}