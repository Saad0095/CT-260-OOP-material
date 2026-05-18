#include <iostream>
using namespace std;

class Tollbooth {
private:
  int numberOfCars;
  double amountCollected;

public:
  Tollbooth() {
    numberOfCars = 0;
    amountCollected = 0;
  }
  void payingCar() {
    numberOfCars++;
    amountCollected += 0.5;
  }
  int getNumberOfCars() { return numberOfCars; }
  double getAmountCollected() { return amountCollected; }
};

int main() {
  Tollbooth t;
  t.payingCar();
  t.payingCar();
  t.payingCar();
  t.payingCar();
  t.payingCar();
  t.payingCar();
  t.payingCar();

  cout << "Total No. Cars passed = " << t.getNumberOfCars() << endl;
  cout << "Total Money Collected = " << t.getAmountCollected() << endl;
  return 0;
}

// Create a class tollbooth. The two data items are a type int to hold the total
// number of cars and a type double to hold the total amount of money collected.
// A constructor initializes both these to 0. When a car passes the toll, a
// member function called payingCar( ) increments the car total and adds 0.50 to
// the cash total. Another member function displays the two totals. DESIGN and
// IMPLEMENT this case. Make assumptions (if required) and include it in the
// description before designing the solution.