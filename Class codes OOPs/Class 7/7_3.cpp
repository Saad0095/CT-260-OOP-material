//A Counter Class with Overloaded Increment Operator in Prefix Notation to be used in an Assignment Expression
#include <iostream>
using namespace std;

class Counter{
	private:
		int count;
	public:
		Counter() : count(0){			
		}
		int getCount(){
			return count;
		}
		void setCount(int x){
			count = x;
		}
		Counter operator++(){
			++count;
			Counter temp;
			temp.count = count;
			return temp;
		}		
};

int main(void){
	Counter c1,c2;
	cout << "Counter 1: " << c1.getCount() << endl << "Counter 2: " << c2.getCount() << endl << endl;
	++c1;
	cout << "Counter 1: " << c1.getCount() << endl << "Counter 2: " << c2.getCount() << endl << endl;
	c2 = ++c1;
	cout << "Counter 1: " << c1.getCount() << endl << "Counter 2: " << c2.getCount() << endl << endl;
	
	return 0;
}