//Function Template
//A function template that accepts user-defined data type (objects) 
//Important that the operator used in template definition MUST be overloaded in the class

#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b){
	if (a > b){
		return a;
	}
	else{
		return b;
	}
}

class Counter{
	private:
		int count;
	public:
		Counter() : count(0){}
		void setCount(int x){
			count = x;
		}
		int getCount(){
			return count;
		}
		bool operator > (Counter a){
			if (count > a.count){
				return true;
			}
			else return false;
		}
};



int main(void){
	int x = 15, y = 10;
	double p = 2.5, q=3.6;
	double r = x;
	char ch1 = 'a', ch2 = 'g';
	Counter c1, c2;
	c1.setCount(15);
	c2.setCount(10);
	
	cout << "Maximum value is: " << Max(x,y) << endl;
	cout << "Maximum value is: " << Max(p,q) << endl;
	cout << "Maximum value is: " << Max(ch1,ch2) << endl;
	cout << "Maximum value is: " << Max(c1,c2) << endl;
	Counter c3 = Max(c1,c2);
	cout << "Maximum value is: " << c3.getCount() << endl;
	return 0;
}
