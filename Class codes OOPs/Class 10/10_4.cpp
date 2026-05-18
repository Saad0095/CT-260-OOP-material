//Friend Function Example with two classes - a Variation

#include <iostream>
using namespace std;

class B; // forward declaration

class A {
	private:
	    int x;
	
	public:
	    A() : x(5) {}
	
	    friend void add(A, B); //friend in class A only
};

class B {
	private:
	    int y;
	
	public:
	    B() : y(10) {}
	
	    //no friend function declaration
	};

void add(A a, B b) {
    cout << "A.x = " << a.x << endl; //OK
	cout << "B.y = " << b.y << endl; //error
}

int main() {
    A objA;
    B objB;
    add(objA, objB);
    return 0;
}