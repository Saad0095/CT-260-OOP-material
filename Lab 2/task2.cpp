#include <iostream>
using namespace std;

class BankAccount {
private:
  double balance;
  int transactions;

public:
  BankAccount() {
    balance = 0;
    transactions = 0;
  }

  void deposit(double amount) {
    balance += amount;
    transactions++;
    cout << "Deposit successful!\n";
  }

  void withdraw(double amount) {
    if (amount > balance) {
      cout << "Insufficient balance!\n";
    } else {
      balance -= amount;
      transactions++;
      cout << "Withdrawal successful!\n";
    }
  }

  void displayBalance() { cout << "Current Balance: " << balance << endl; }

  void displayTransactions() {
    cout << "Number of Transactions: " << transactions << endl;
  }
};

int main() {
  BankAccount account;
  int opt;
  double amount;

  do {
    cout << "\nWelcome...\n";
    cout << "1. Display account balance\n";
    cout << "2. Display number of transactions\n";
    cout << "3. Make a deposit\n";
    cout << "4. Make a withdrawal\n";
    cout << "5. Exit\n";
    cout << "Enter your opt: ";
    cin >> opt;

    switch (opt) {
    case 1:
      account.displayBalance();
      break;
    case 2:
      account.displayTransactions();
      break;
    case 3:
      cout << "Enter deposit amount: ";
      cin >> amount;
      account.deposit(amount);
      break;
    case 4:
      cout << "Enter withdrawal amount: ";
      cin >> amount;
      account.withdraw(amount);
      break;
    case 5:
      cout << "Exiting program...\n";
      break;
    default:
      cout << "Invalid opt!\n";
      break;
    }

  } while (opt != 5);

  return 0;
}
