//friend Class Example

#include <iostream>
using namespace std;

class A {
	private:
	    int data;
	
	public:
	    A() : data(50) {}
	
	    friend class B; // B is friend of A
};

class B {
	public:
	    void showData(A a) {
	        cout << "Data: " << a.data << endl;
	    }
};

int main() {
    A objA;
    B objB;

    objB.showData(objA);
    return 0;
}