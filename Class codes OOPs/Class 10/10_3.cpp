//Friend Function Example with two classes

#include <iostream>
using namespace std;

class B; // forward declaration

class A {
	private:
	    int x;
	
	public:
	    A() : x(5) {}
	
	    friend void add(A, B);
};

class B {
	private:
	    int y;
	
	public:
	    B() : y(10) {}
	
	    friend void add(A, B);
	};

void add(A a, B b) {
    cout << "Sum: " << a.x + b.y << endl;
}

int main() {
    A objA;
    B objB;
    add(objA, objB);
    return 0;
}