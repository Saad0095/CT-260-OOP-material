#include <iostream>
using namespace std;

class Vehicle {
protected:
  string carId;
  string brand;
  string model;

public:
  Vehicle(string id, string b, string m) : carId(id), brand(b), model(m) {}

  virtual bool isAvailable() = 0;
  virtual void rent() = 0;
  virtual void returnCar() = 0;

  virtual ~Vehicle() {}
};

class Car : public Vehicle {
private:
  bool available;

public:
  Car(string id, string b, string m) : Vehicle(id, b, m), available(true) {}

  bool isAvailable() { return available; }

  void rent() {
    if (available) {
      available = false;
      cout << brand << " " << model << " rented " << endl;
    } else {
      cout << "Car not available " << endl;
    }
  }

  void returnCar() {
    available = true;
    cout << brand << " " << model << " returned " << endl;
  }
};

class RentalSystem {
public:
  void rentVehicle(Vehicle *v) {
    if (v->isAvailable())
      v->rent();
    else
      cout << "Vehicle not available " << endl;
  }

  void returnVehicle(Vehicle *v) { v->returnCar(); }
};

class Customer {
private:
  string name;

public:
  Customer(string n) : name(n) {}

  void rentVehicle(RentalSystem &r, Vehicle *v) { r.rentVehicle(v); }

  void returnVehicle(RentalSystem &r, Vehicle *v) { r.returnVehicle(v); }
};

int main() {
  RentalSystem r1;

  Customer c1("Saad");

  Vehicle *cars[2];

  cars[0] = new Car("AX-231", "Toyota", "Corolla");
  cars[1] = new Car("BX-101", "Kia", "Sportage");

  c1.rentVehicle(r1, cars[0]);
  c1.rentVehicle(r1, cars[0]);
  c1.returnVehicle(r1, cars[0]);
  c1.rentVehicle(r1, cars[0]);
  return 0;
}