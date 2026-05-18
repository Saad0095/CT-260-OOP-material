#include <iostream>
using namespace std;

class Complex {
private:
  double *real;
  double *img;

public:
  Complex() {
    real = new double;
    *real = 1.0;
    img = new double;
    *img = 1.0;
  }
  Complex(double r, double im) {
    real = new double;
    *real = r;
    img = new double;
    *img = im;
  }
  Complex(const Complex &obj) {
    real = new double;
    *real = *(obj.real);
    img = new double;
    *img = *(obj.img);
  }

  double getReal() { return *real; }
  double getImage() { return *img; }

  ~Complex() {
    delete real;
    delete img;
  }
};

int main() {
  Complex c1(4.0, 5.0);
  Complex c2(c1);

  cout << "Complex no. 1: " << c1.getReal() << " + " << c1.getImage() << "i"
       << endl;
  cout << "Complex no. 2: " << c2.getReal() << " + " << c2.getImage() << "i"
       << endl;
  return 0;
}

// Write a C++ program to copy the value of one object to another object using
// copy constructor. For example you can define a class for complex number and
// create its object for performing this task. Remember that you must allocate
// memory dynamically to data members.