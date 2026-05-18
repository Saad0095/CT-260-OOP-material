//Understanding Inheritance with Exception Class

#include <iostream>
using namespace std;
const int MAX = 3;

// Base Exception Class
class StackError {
	protected:
		string reason;
	public:
		StackError(string a) : reason(a){ }
		virtual string getMessage() { // Virtual function for polymorphism
			return "Base Error: " + reason;
		}	
};

// Derived Exception Class
class StackOverflowError : public StackError {
    private:
        int overflowValue;
    public:
        // Pass reason to base, store specific overflow value
        StackOverflowError(string a, int val) : StackError(a), overflowValue(val) {}
        
        string getMessage() override {
            return "Derived Error: " + reason + " while trying to push " + to_string(overflowValue);
        }
};

class Stack {
private:
	int st[MAX]; int top;
public:
	Stack() { top = -1; }
	void push(int var) {
		if (top>=MAX-1)            
			throw StackOverflowError("Stack is Full", var); 
		st[++top] = var; 
	}
};

int main() {
	Stack s1;
	try {	
		s1.push(11); 
		s1.push(22); 
		s1.push(33); 
		s1.push(44);
	}
    // PROBLEM: Catching derived object by BASE value
	//catch(StackError obj) {
	//	cout << "--- Catching by Base Value ---" << endl;
	//	cout << obj.getMessage() << endl; // Prints Base Error message (Slicing occurred!)
	//}
    
    
    // SOLUTION: Catching by BASE Reference
    catch(StackError &obj) {
        cout << "--- Catching by Base Reference ---" << endl;
		cout << obj.getMessage() << endl; // Prints Derived Error message (Polymorphism works!)
    }
    
	return 0;
}
