#include <iostream>
using namespace std;

class Account {
protected:
  string name;
  float Balance;

public:
  Account(string tit, int amount) : name(tit), Balance(amount) {}
  virtual void deposit(float amount) { Balance += amount; };
  virtual void withdraw(double amount) {
    if (Balance >= amount) {
      Balance -= amount;
    }
  };
  void checkBalance() { cout << name << " balance: Rs " << Balance << endl; };
};

class InterestAccount : virtual public Account {
protected:
  float Interest;

public:
  InterestAccount(string tit, int amount)
      : Account(tit, amount), Interest(0.3) {}

  void deposit(float amount) { Balance += amount + (amount * Interest); };
};

class ChargingAccount : virtual public Account {
protected:
  float fee;

public:
  ChargingAccount(string tit, int amount) : Account(tit, amount), fee(25) {}
  void withdraw(float amount) {
    float toBeDrawn = amount + fee;
    if (Balance >= toBeDrawn) {
      Balance -= toBeDrawn;
    }
  };
};

class ACI : public InterestAccount, public ChargingAccount {
public:
  ACI(string tit, int amount)
      : Account(tit, amount), InterestAccount(tit, amount),
        ChargingAccount(tit, amount) {}
  void transfer(double amount, ACI &obj) {
    if (Balance >= amount) {
      obj.deposit(amount);
      ChargingAccount::withdraw(amount);
    }
  };
};

int main() {
  cout << "----- Banking System -----\n" << endl;

  ACI a1("Saad", 100000), a2("Ali", 50000);
  cout << "Inital Balances:" << endl;
  a1.checkBalance();
  a2.checkBalance();

  cout << "Depositing Rs.10000 into Saad's account (30% interest)" << endl;
  a1.deposit(100);

  cout << "Withdrawing Rs.5000 from Saad's account (+ Rs.25 fee)" << endl;
  a1.withdraw(50);

  cout << "Transferring Rs.20000 from Saad to Ali" << endl;

  a1.transfer(200, a2);

  cout << "\nFinal:" << endl;
  a1.checkBalance();
  a2.checkBalance();
  return 0;
}