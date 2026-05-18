// You are required to model a PersonalComputer system.
// A PC must have a Motherboard. The Motherboard is vital; if the PC is disposed
// of, the Motherboard is disposed of with it. However, a PC also has Peripheral
// devices (like a Mouse or Keyboard). These Peripherals are plugged in and can
// be moved to a different PC if the current one breaks. Implement the PC,
// Motherboard, and Peripheral classes using the appropriate association types.
// Write a simple main function to demonstrate the lifetime of these objects.
#include <iostream>
using namespace std;

class Motherboard {
public:
  Motherboard() { cout << "Motherboard Created!" << endl; }
  ~Motherboard() { cout << "Motherboard destroyed" << endl; }
};

class Peripheral {
private:
  string name;

public:
  Peripheral(string n = "Device") : name(n) {
    cout << n << " device Created!" << endl;
  }
  ~Peripheral() { cout << name << " destroyed" << endl; }
};

class PersonalComputer {
private:
  Motherboard motherboard;
  Peripheral *peripheral[4];
  int noOfPeripheral;

public:
  PersonalComputer() : noOfPeripheral(0) {
    cout << "Computer Created!" << endl;
  }
  void addPeripheral(Peripheral *p) {
      peripheral[noOfPeripheral] = p;
      noOfPeripheral++;
    cout << "Peripheral Added!" << endl;
  }
  ~PersonalComputer() { cout << "Computer Destroyed!" << endl; }
};

int main() {
  Peripheral *p1 = new Peripheral("Mouse");
  Peripheral *p2 = new Peripheral("Keyboard");
  {
    PersonalComputer pc1;
    pc1.addPeripheral(p1);
    pc1.addPeripheral(p2);
  }
  cout << "PC Destroyed! Peripheral Still exists\n" << endl;

  {
    PersonalComputer pc2;
    pc2.addPeripheral(p1);
    pc2.addPeripheral(p2);
  }
  cout << "PC Destroyed! Peripheral Still exists\n" << endl;
  cout << "Now, deleting Peripherals...\n" << endl;
  delete p1;
  delete p2;

  return 0;
}