#include <iostream>
using namespace std;

class Vehicle{
	protected:
		string type;
		string make;
		int model;
		string color;
		int year;
		float mileDriven;
	public:
       Vehicle():type(""),make(""),model(0),color(""),year(0),mileDriven(0.0){}
		Vehicle(string t,string m, int mo, string c, int y, float mi){
			type = t;
			make = m;
			model = mo;
			color = c;
			year = y;
			mileDriven = mi;
		}
		virtual void display() = 0;
};

class GasVehicle:virtual public Vehicle{
	protected:
		int tankSize;
	public:
		virtual void display()=0;
};

class ElectricVehicle:virtual public Vehicle{
	protected:
		float energyStorage;
	public:
		virtual void display()=0;
};

class HeavyVehicle:public GasVehicle, public ElectricVehicle{
	protected:
		float maxWeight;
		int wheels;
		float length;
	public:
		virtual void display()=0;
};
class HighPerformance:public GasVehicle{
	protected:
		int horsePower;
		int topSpeed;
	public:

		HighPerformance(string t,string m, int mo, string c, int y, float mi, int ts, int hp, int td):Vehicle(t, m, mo, c, y, mi) {
           horsePower = hp;
			topSpeed = td;
		}
		virtual void display()=0;};
		
class SportsCar:public HighPerformance{
       protected:
           string gearBox;
			string driveSystem;
		public:
           SportsCar(string t,string m, int mo, string c, int y, float mi, int ts, int hp, int td):HighPerformance(t, m, mo, c, y, mi, td, hp, td){}
           void display(){
			cout << "Type: " << type << endl;
			cout << "Make: " << make << endl;
			cout << "Model: " << model << endl;
			cout << "Color: " << color << endl;
			cout << "Year: " << year << endl;
			cout << "Miles Driven: " << mileDriven << endl;
			cout << "Tank Size: " << tankSize << endl;
			cout << "Horse Power: " << horsePower << endl;	
			cout << "Top Speed: " << topSpeed << endl;}
};

class Bus:public HeavyVehicle{
	private:
		int seats;
	public:
		Bus(string t,string m, int mo, string c, int y, float mi, int ts, float e, float mw, int wh, float l, int se):Vehicle(t, m, mo, c, y, mi) {
			tankSize = ts;
			energyStorage = e;	
			maxWeight = mw;
			wheels = wh;
			length = l;
			seats = se;
		}
		void display(){
			cout << "Type: " << type << endl;
			cout << "Make: " << make << endl;
			cout << "Model: " << model << endl;
			cout << "Color: " << color << endl;
			cout << "Year: " << year << endl;
			cout << "Miles Driven: " << mileDriven << endl;
			cout << "Tank Size: " << tankSize << endl;
			cout << "Energy Storage: " << energyStorage << endl;	
			cout << "Max Weight: " << maxWeight << endl;
			cout << "Wheels: " << wheels << endl;
			cout << "Length: " << length << endl;
			cout << "Seats: " << seats << endl;
		}
};

class ConstructionTruck:public HeavyVehicle{
   public:
       string Cargo;
       ConstructionTruck(string t,string m, int mo, string c, int y, float mi, int ts, float e, float mw, int wh, float l, int se):Vehicle(t, m, mo, c, y, mi){
           tankSize = ts;
			energyStorage = e;	
			maxWeight = mw;
			wheels = wh;
			length = l;
       }
};

int main(){
	Bus b("Bus", "Hiace", 2026, "white", 2026, 34, 55, 16.5, 2400, 4, 1598, 8);
	b.display();
	return 0;
}