#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    // Parameterized constructor with default arguments
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Function to add two Complex numbers
    Complex Add(const Complex &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 1); // parameterized constructor
    Complex c2(1, 7); // parameterized constructor
    Complex c4(); // parameterized constructor
    // Add c1 and c2 using Add function
    Complex result = c1.Add(c2);

    // Display result
    result.display();

    // Also works as default constructor
    Complex c3; 
    c3.display();  // prints 0 + 0i

    return 0;
}