//Function Template Example
//A single function template with two generic data types

#include <iostream>
using namespace std;

template <typename T, typename U>
T product(T a, U b){
	return a * b;
}


int main(void){
	int x = 15, y = 10;
	double p = 2.5, q=3.6;
	double r = x;
	char ch1 = 'a', ch2 = 'g';
	cout << "Maximum value is: " << product(p,x) << endl;
	return 0;
}
