//Friend Function Example. Declared and Defined inside class

#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    // Friend function declaration and definition
    friend void printLength(Box b){
    	cout << "Length: " << b.length << endl;
	}
};

int main() {
    Box b1;
    printLength(b1); // normal function call
    return 0;
}