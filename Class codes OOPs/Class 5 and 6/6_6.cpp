//POLYMORPHISM - not all conditions fulfilled

#include <iostream>
#include <string>
using namespace std;

class Person{
	private:
		string name;
	public:
		Person() : name("person"){
		}
		Person(string x) : name(x){
		}
		void setName(string x){
			name = x;
		}
		void displayDetails(){
			cout << "Name is: " << name << endl;
		}		
};

class Student : public Person{
	private:
		double cgpa;
	public:
		Student() : Person(),cgpa(1.0){
		}
		Student(string x, double y) : Person(x), cgpa(y){
		}
		void setCGPA(double x){
			cgpa = x;
		}
		void displayDetails(){
			Person::displayDetails();
			cout << "CGPA is: " << cgpa << endl;
		}
};

class Faculty : public Person{
	private:
		string dept;
	public:
		Faculty() : Person(), dept("department"){
		}
		Faculty(string x, string y) : Person(x), dept(y){
		}
		void setDepartment(string x){
			dept = x;
		}
		void displayDetails(){
			Person::displayDetails();
			cout << "Department is: " << dept << endl;
		}
};

int main(void){
	Person* arr[5];
	arr[0] = new Student("Abdullah",3.5);
	arr[1] = new Student("Bilal",3.2);
	arr[2] = new Faculty("Osama","CSIT");
	arr[3] = new Student("Ahmed",2.7);
	arr[4] = new Faculty("Zubair","Management");
	for(int i=0;i<5;i++){
		arr[i]->displayDetails();
	}	
	return 0;	
}







