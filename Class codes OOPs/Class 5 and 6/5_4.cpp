#include <iostream>
using namespace std;

class Counter{
	protected:
		int count;
	public:
		Counter() : count(0){			
		}
		Counter(int x) : count(x){
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

class NewCounter : public Counter{
	public:
		NewCounter() : Counter(){
		}
		NewCounter(int x) : Counter(x){
		}
		void countDown(){
			count--; //Child can access Protected Members of Parent Class
		}	
};

int main(void){
	NewCounter c1(3); //Parameterized Constructor of Parent is NOT inherited. Must be redefined in Child Class
	cout << "Initial Value: " << c1.getCount() << endl;
	for(int i=0;i<5;i++){
		c1.countUp();
	}
	cout << "After increments: " << c1.getCount() << endl;
	for(int j=0;j<3;j++){
		c1.countDown();
	}
	cout << "After decrements: " << c1.getCount() << endl;
	return 0;
}