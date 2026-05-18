#include <iostream>
using namespace std;

class Store {
protected:
  string cName;
  float total_bill;

public:
  Store(string name, float bill) : cName(name), total_bill(bill) {}
  virtual void calculate() = 0;
};

class ImtiazStore : public Store {
public:
  ImtiazStore(string name, float bill) : Store(name, bill) {}

  virtual void calculate() {
    cout << cName << "'s Imtiaz Bill before discount: Rs " << total_bill
         << endl;
    total_bill -= total_bill * 0.07;
    cout << cName << "'s Imtiaz Final Bill: Rs " << total_bill << endl;
  }
};

class BinHashimStore : public Store {
public:
  BinHashimStore(string name, float bill) : Store(name, bill) {}

  virtual void calculate() {
    cout << cName << "'s Bin Hashim Bill before discount: Rs " << total_bill
         << endl;
    total_bill -= (total_bill * 0.05);
    cout << cName << "'s Bin Hashim Final Bill: Rs " << total_bill << endl;
  }
};

int main() {
  ImtiazStore s1("Saad", 25000);
  s1.calculate();

  BinHashimStore s2("Saad", 25000);
  s2.calculate();

  return 0;
}