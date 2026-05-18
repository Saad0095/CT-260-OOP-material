#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string typeOfCar; 
    string make; 
    string model; 
    string color;
    int year;
    float milesDriven;

public:
    Vehicle(string t, string mk, string md, string c, int y, float m)
        : typeOfCar(t), make(mk), model(md), color(c), year(y), milesDriven(m) {}
};

class GasVehicle : virtual public Vehicle {
protected:
    int fuelTankSize;

public:
    GasVehicle(string t, string mk, string md, string c, int y, float m, int f)
        : Vehicle(t, mk, md, c, y, m), fuelTankSize(f) {}
};

class ElectricVehicle : virtual public Vehicle {
protected:
    int energyStorage;

public:
    ElectricVehicle(string t, string mk, string md, string c, int y, float m, int e)
        : Vehicle(t, mk, md, c, y, m), energyStorage(e) {}
};

class HighPerformance : public GasVehicle {
protected:
    int horsePower; 
    int topSpeed;

public:
    HighPerformance(string t, string mk, string md, string c, int y, float m,
                    int f, int hp, int ts)
        : Vehicle(t, mk, md, c, y, m),
          GasVehicle(t, mk, md, c, y, m, f),
          horsePower(hp), topSpeed(ts) {}
};

class HeavyVehicle : public GasVehicle {
protected:
    int maxWeight; 
    int noOfWheels;
    float length;

public:
    HeavyVehicle(string t, string mk, string md, string c, int y, float m,
                 int f, int mw, int nw, float l)
        : Vehicle(t, mk, md, c, y, m),
          GasVehicle(t, mk, md, c, y, m, f),
          maxWeight(mw), noOfWheels(nw), length(l) {}
};

class SportsCar : public HighPerformance {
    string gearbox; 
    string driveSystem;

public:
    SportsCar(string t, string mk, string md, string c, int y, float m, int f,
              int hp, int ts, string g, string d)
        : Vehicle(t, mk, md, c, y, m),
          HighPerformance(t, mk, md, c, y, m, f, hp, ts),
          gearbox(g), driveSystem(d) {}
};

class ConstructionTruck : public HeavyVehicle {
    string cargo;

public:
    ConstructionTruck(string t, string mk, string md, string c, int y, float m,
                      int f, int mw, int nw, float l, string cg)
        : Vehicle(t, mk, md, c, y, m),
          HeavyVehicle(t, mk, md, c, y, m, f, mw, nw, l),
          cargo(cg) {}
};

class Bus : public HeavyVehicle {
    int seats;

public:
    Bus(string t, string mk, string md, string c, int y, float m, int f,
        int mw, int nw, float l, int s)
        : Vehicle(t, mk, md, c, y, m),
          HeavyVehicle(t, mk, md, c, y, m, f, mw, nw, l),
          seats(s) {}

    void display() {
        cout << "\n--- Bus Details ---\n";
        cout << "Type: " << typeOfCar << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Miles Driven: " << milesDriven << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " L" << endl;
        cout << "Max Weight: " << maxWeight << " kg" << endl;
        cout << "No of Wheels: " << noOfWheels << endl;
        cout << "Length: " << length << " m" << endl;
        cout << "Seats: " << seats << endl;
    }
};

int main() {
    Bus b("Bus", "Volvo", "B9", "White", 2015, 12000,
          300, 20000, 6, 12.5f, 50);

    b.display();

    return 0;
}