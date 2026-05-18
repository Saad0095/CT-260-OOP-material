#include <iostream>
using namespace std;
class complex {
private:
  int real;
  int imaginary;

public:
  complex() : real(0), imaginary(0) {}
  complex(int x, int y) : real(x), imaginary(y) {}
  void setReal(int x) { real = x; }
  void setImaginary(int x) { imaginary = x; }
  int getReal() { return real; }
  int getImaginary() { return imaginary; }
  void add(complex a, complex b) {
    real = a.real + b.real;
    imaginary = a.imaginary + b.imaginary;
  }
  complex add(complex a) {
    complex temp;
    temp.real = real + a.real;
    temp.imaginary = imaginary + a.imaginary;
    return temp;
  }
  void display() { cout << real << " + " << imaginary << "i" << endl; }
};

int main(void) {
  complex c1(3, 4), c2(5, 6);

  cout << "First complex number: ";
  c1.display();
  cout << "Second complex number: ";
  c2.display();

  // Using void add function
  complex c3;
  c3.add(c1, c2);
  cout << "Sum using void add function: ";
  c3.display();

  // Using complex add function
  complex c4 = c1.add(c2);
  cout << "Sum using return add function: ";
  c4.display();

  return 0;
}