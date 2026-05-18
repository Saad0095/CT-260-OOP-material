//Complex Number Class with Addition Operator Overloaded
#include <iostream>
using namespace std;
class Complex{
	private:
		int real;
		int imaginary;
	public:
		Complex(int x, int y) : real(x), imaginary(y){
		}
		void setReal(int x){
			real = x;
		}
		void setImaginary(int x){
			imaginary = x;
		}
		int getReal(){
			return real;
		}
		int getImaginary(){
			return imaginary;
		}
		Complex operator+(Complex a){
			Complex temp(0,0);
			temp.real = real + a.real;
			temp.imaginary = imaginary + a.imaginary;
			return temp;
		}
};

int main(void){
	Complex c1(1,2), c2(1,3);
	Complex c3(0,0);
	c3 = c1 + c2;
	cout << "First Complex Number: " << c1.getReal() << " + " << c1.getImaginary() << "i" << endl;
	cout << "Second Complex Number: " << c2.getReal() << " + " << c2.getImaginary() << "i" << endl;
	cout << "The Sum of two is: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;
	return 0;
}