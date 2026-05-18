//Defining Default Constructor with specific initial values of object's attributes
#include <iostream>
#include <string.h>
using namespace std;

class Student{
	private:
		int ID;
		string name;
		double cgpa;		
	public:
		Student(){
			ID = 1;
			name = "student";
			cgpa = 1.0;
		}
		void setID(int x){
			ID = x;
		}
		void setName(string z){
			name = z;
		}
		void setCGPA(double y){
			cgpa = y;
		}		
		int getID(){
			return ID;
		}
		string getName(){
			return name;
		}
		double getCGPA(){
			return cgpa;
		}		
};


int main(void){
	Student std1;
	cout << "Student One ID is: " << std1.getID() << endl;
	cout << "Student One Name is: " << std1.getName() << endl;
	cout << "Student One CGPA is: " << std1.getCGPA() << endl;
}