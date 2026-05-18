#include <bits/stdc++.h>
using namespace std;

class RentalException {
private:
  string msg;

public:
  RentalException(string m) : msg(m) {};
  string what() { return msg; }
};

class Vehicle {
protected:
  string name;

public:
  Vehicle(string n) : name(n) {}

  virtual void rent() = 0;
  virtual bool isAvailable() = 0;

  virtual ~Vehicle() {}
};

class PremiumService {
public:
  void vipSupport() { cout << "VIP support enabled\n"; }
};

class Car : virtual public Vehicle {
protected:
  bool available;

public:
  Car(string n) : Vehicle(n), available(true) {}

  void rent() override {
    if (available) {
      cout << name << " Car rented successfully\n";
      available = false;
    } else {
      cout << name << " Car not available\n";
    }
  }

  bool isAvailable() override { return available; }
};

class Luxury : public Car, public PremiumService {
public:
  Luxury(string n) : Vehicle(n), Car(n) {}

  void rent() override {
    if (isAvailable()) {
      cout << name << " Luxury rented with VIP service\n";
      vipSupport();
      available = false;
    } else {
      cout << name << " Luxury not available\n";
    }
  }

  bool isAvailable() override { return available; }
};

template <typename T> class RentalQueue {
private:
  queue<T> q;

public:
  void addReq(T item) { q.push(item); }

  T processReq() {
    if (q.empty()) {
      throw RentalException("Queue is Empty");
    }
    T front = q.front();
    q.pop();
    return front;
  }
  bool empty() { return q.empty(); }
};

int main() {
  Car c1("Mehran");
  Car c2("Swift");
  Luxury l1("BMW");
  map<string, Vehicle *> vehicles;

  vehicles["Mehran"] = &c1;
  vehicles["Swift"] = &c2;
  vehicles["BMW"] = &l1;

  RentalQueue<string> request;
  request.addReq("Mehran");
  request.addReq("Swift");
  request.addReq("BMW");
  request.addReq("Ferrari");
  try {
    while (!request.empty()) {
      string v = request.processReq();
      cout << "\nProcessing request: " << v << endl;
      if (vehicles.find(v) == vehicles.end()) {
        cout << "Vehicle " << v << " not found" << endl;
        continue;
      }
      vehicles[v]->rent();
    }
    request.processReq();
  } catch (RentalException &e) {
    cout << e.what();
  }

  return 0;
}