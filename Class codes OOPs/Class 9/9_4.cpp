//Composition Example. Enforcing Composition by making Part Class as a Nested Class
#include <iostream>
using namespace std;

class Car {
	private:
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
	//Part Class objects can NOT be instantiated in Real World.
}









