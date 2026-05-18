//Understanding Inheritance with Exception Class
//Good Code

#include <iostream>
using namespace std;
const int MAX = 3;

// Base Exception Class
class StackError {
	protected: // Changed to protected so derived class can use it
		string reason;
	public:
		StackError(string a) : reason(a){ }
		string getMessage() { 
			return reason;
		}	
};

// Derived Exception Class
class StackOverflowError : public StackError {
    private:
        int overflowValue;
    public:
        // Pass reason to base, store specific overflow value
        StackOverflowError(string a, int val) : StackError(a), overflowValue(val) {}
        
        string getMessage() {
            return reason + " while trying to push " + to_string(overflowValue);
        }
};

class Stack {
private:
	int st[MAX]; int top;
public:
	Stack() { top = -1; }
	void push(int var) {
		if (top>=MAX-1)
            // Throwing the more specific DERIVED exception object
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
		s1.push(55);
	}
    
	catch(StackOverflowError obj) {	//catch by value	
		cout << obj.getMessage() << endl; 
	}
    
    
	return 0;
}
