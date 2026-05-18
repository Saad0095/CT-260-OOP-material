//Function Template Example
//A single template is defined with a generic data type.
//Compiler substitute appropriate data type by looking at the data type of function arguments
#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b){
	if (a > b){
		return a;
	}
	else{
		return b;
	}
}

int main(void){
	int x = 15, y = 10;
	double p = 2.5, q=3.6;
	double r = x;
	char ch1 = 'a', ch2 = 'g';
	cout << "Maximum value is: " << max(x,y) << endl;
	cout << "Maximum value is: " << max(p,q) << endl;
	cout << "Maximum value is: " << max(ch1,ch2) << endl;
	return 0;
}
