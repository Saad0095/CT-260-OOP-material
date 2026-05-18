
#include <iostream>
#include <string>
using namespace std;

class Shape{
	private:
		string name;
	public:
		Shape(string x) : name(x){
		}
		double getArea(){
			return 0;
		}
		double getPerimeter(){
			return 0;
		}
		void displayDetails(){
			cout << "This shape is a " << this->name << endl;
			cout << "The area is: " << this->getArea() << endl;
			cout << "The perimter is: " << this->getPerimeter() << endl;
		}
};

class Square : public Shape{
	private:
		double side;
	public:
		Square(string x, double y) : Shape(x),side(y){
		}
		double getArea(){
			return side * side;
		}
		double getPerimeter(){
			return 4 * side;
		}
		void displayDetails(){
			Shape::displayDetails();
			cout << "The area is: " << this->getArea() << endl;
			cout << "The Perimeter is " << this->getPerimeter() << endl;
		}		
};

class Rectangle : public Shape{
	private:
		double length;
		double width;
	public:
		Rectangle(string x, double y, double z) : Shape(x),length(y),width(z){
		}
		double getArea(){
			return length * width;
		}
		double getPerimeter(){
			return ((2 * length) + (2 * width));
		}
		void displayDetails(){
			Shape::displayDetails();
			cout << "The area is: " << this->getArea() << endl;
			cout << "The Perimeter is " << this->getPerimeter() << endl;
		}		
};

int main(void){
	Square s1("square",3);
	s1.displayDetails();
	
	Rectangle r1("rectangle",3,4);
	r1.displayDetails();
	
	Shape sh1("Shape");
	sh1.displayDetails();
	return 0;
}