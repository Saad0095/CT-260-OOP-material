//Function Template Motivation
//More than one function with similar logic, differ in the type of data on which operating

#include <iostream>
using namespace std;

int myMax(int a, int b){
	if(a > b){
		return a;
	}
	else{
		return b;
	}
}
//
//double myMax(double a, double b){
//	if (a > b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//
//char myMax(char a, char b){
//	if (a > b){
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//
int main(void){
	int x = 15, y = 10;
	double p = 2.5, q=3.6;
	double r = x;
	char ch1 = 'a', ch2 = 'g';
	cout << "Maximum value is: " << myMax(x,y) << endl;
	cout << "Maximum value is: " << myMax(p,q) << endl;
	cout << "Maximum value is: " << myMax(ch1,ch2) << endl;
	return 0;
}
