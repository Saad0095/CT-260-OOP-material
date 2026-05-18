//Understanding behavior of default copy constructor
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
		Student(int x, string y, double z){
			ID = x;
			name = y;
			cgpa = z;
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
	Student std2(101,"Ahmad",3.5);
	Student std3 = std2;
	Student std4(std3);
	cout << "Student One ID is: " << std1.getID() << endl;
	cout << "Student One Name is: " << std1.getName() << endl;
	cout << "Student One CGPA is: " << std1.getCGPA() << endl << endl;
	
	cout << "Student Two ID is: " << std2.getID() << endl;
	cout << "Student Two Name is: " << std2.getName() << endl;
	cout << "Student Two CGPA is: " << std2.getCGPA() << endl << endl;
	
	cout << "Student Three ID is: " << std3.getID() << endl;
	cout << "Student Three Name is: " << std3.getName() << endl;
	cout << "Student Three CGPA is: " << std3.getCGPA() << endl << endl;
	
	cout << "Student Four ID is: " << std4.getID() << endl;
	cout << "Student Four Name is: " << std4.getName() << endl;
	cout << "Student Four CGPA is: " << std4.getCGPA() << endl;	
}