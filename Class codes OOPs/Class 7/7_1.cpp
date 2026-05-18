//A Counter Class
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
		void countUp(){
			count++;
		}		
};

int main(void){
	Counter c1;
	cout << "Initial Value: " << c1.getCount() << endl;
	for(int i=0;i<5;i++){
		c1.countUp();
	}
	cout << "Value of counter after increment: " << c1.getCount() << endl;
	return 0;
}