#include <iostream>
using namespace std;

class Citizen {
private:
  int ID;
  string name;
  const string CNIC;
  static int totalPopulation;

public:
  Citizen() : name("citizen"), CNIC("0000 - 0000 - 0") {
    totalPopulation++;
    ID = this->totalPopulation;
  }
  Citizen(string n, string cn) : name(n), CNIC(cn) {
    totalPopulation++;
    ID = totalPopulation;
  }
  int getID() const { return ID; }
  static int getTotalPopulationCount() { return totalPopulation; }
};

int Citizen ::totalPopulation = 0;

int main() {
  Citizen c1, c2("Ali", "42202-212121-5"), c3("Ali", "42202-212121-5"),
      c4("Ali", "42202-212121-5"), c5("Ali", "42202-212121-5"),
      c6("Ali", "42202-212121-5");
  cout << "Total Population = " << Citizen ::getTotalPopulationCount() << endl;
  return 0;
}