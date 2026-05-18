//Understanding Difference between Catching Exception Object by value and by reference

#include <iostream>
using namespace std;
const int MAX = 3;

class StackError{
	private:
		string reason;
	public:
		StackError(string a) : reason(a){ }
        
        // Copy Constructor added to track copies
        StackError(const StackError &obj) {
            reason = obj.reason;
            cout << "[Copy Constructor Called! Object duplicated in memory]" << endl;
        }
        
		string getReason() {
			return reason;
		}	
};

class Stack {
private:
	int st[MAX];
	int top;
public:
	Stack() { top = -1; }
	void push(int var) {
		if (top>=MAX-1) 
			throw StackError("Stack is Full"); 
		st[++top] = var; 
	}
	int pop() {
		if (top < 0) 
			throw StackError("Stack is Empty"); 
		return st[top--]; 
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
    // Variation A: Catching by Value (Triggers copy constructor)
	catch(StackError obj) { 
		cout << "Caught by value: " << obj.getReason() << endl;
	}
    
     
    // Variation B: Catching by Reference (No copy constructor called)
    // catch(StackError &obj) { 
	// 	cout << "Caught by reference: " << obj.getReason() << endl;
	// }
    
	return 0;
}
