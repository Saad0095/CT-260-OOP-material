// “Hotel Mercato” requires a system module that will help the hotel to
// calculate the rent of the customers. You are required to develop one module
// of the system according to the following requirements:  The hotel wants
// such a system that should have the feature to change the implementation
// independently of the interface. This will help when dealing with changing
// requirements.  The hotel charges each customer 1000.85/- per day. This
// amount is being decided by the hotel committee and cannot be changed
// fulfilling certain complex formalities.  The module then analyses he
// number of days. If the customer has stayed for more than a week in the hotel,
// he gets discount on the rent. Otherwise, he is being charged normally. 
// The discounted rent is being calculated after subtracting one day from the
// total number of days.
//  In the end, the module displays the following details:
// o Customer name
// o Days
// o Rent

// Note that, the function used for displaying purpose must not have the ability
// to modify any data member.

#include <iostream>
using namespace std;

class HotelMercato {
private:
  string customerName;
  const float rent;
  int noOfDays;

public:
  HotelMercato(string name, int days)
      : customerName(name), noOfDays(days), rent(1000.85) {};
  float calRent() {
    int total = 0;
    if (noOfDays > 7) {
      total = rent * (noOfDays - 1);
    } else {
      total = rent * noOfDays;
    }
    return total;
  }
  void display() {
    cout << "Name of Customer: " << customerName << endl;
    cout << "Number of days he stayed in Hotel: " << noOfDays << endl;
    cout << "Total Rent: " << calRent() << endl;
    cout << "\n";
  }
};

int main() {
  HotelMercato h1("Saad", 10), h2("Ali", 5);
  h1.display();
  h2.display();
  return 0;
}