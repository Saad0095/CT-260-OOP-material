//Composition Example. Part Class object is declared as an object in the whole class
#include <iostream>
using namespace std;

class Engine{
	private:
		int hp;
		int oilLevel;
		int noCylinders;
	public:
		void start(){
			cout << "Engine started.." << endl;			
		}
		void stop(){
			cout << "Engine Stop.." << endl;
		}
};

class Car {
	private:		
		int modelYear;
		int noOfSeats;
		Engine carEngine;
	public:
		void startCar(){
			carEngine.start();
			cout << "Car started" << endl;
		}
		void stopCar(){
			carEngine.stop();
			cout << "Car stopped" << endl;
		}
};

int main(void){
	Car myCar;
	myCar.startCar();
	myCar.stopCar();
	return 0;
	//Part Class objects can still be instantiated in Real World.
}









