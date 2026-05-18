#include <iostream>
using namespace std;

class CityBank;

class NationalBank {
private:
  double balance;

public:
  NationalBank() : balance(0) {};
  NationalBank(double b) : balance(b) {};

  friend void compareBalances(NationalBank n, CityBank c);

  friend class BankAudit;
};

class CityBank {
private:
  double balance;

public:
  CityBank() : balance(0) {};
  CityBank(double b) : balance(b) {};

  friend void compareBalances(NationalBank n, CityBank c);
};

class BankAudit {
public:
  void applyTax(NationalBank &n) {
    n.balance -= (n.balance * 0.05);
    cout << "Balance After Applying Tax: " << n.balance;
  }
};

void compareBalances(NationalBank n, CityBank c) {
  if (n.balance > c.balance) {
    cout << "NationalBank has higher balance" << endl;
  } else if (n.balance < c.balance) {
    cout << "CityBank has higher balance" << endl;
  } else {
    cout << "Both have equal balance" << endl;
  }
};

int main() {
  NationalBank n1(55000);
  CityBank c1(81000);
  compareBalances(n1, c1);

  BankAudit aud;
  aud.applyTax(n1);
  return 0;
}