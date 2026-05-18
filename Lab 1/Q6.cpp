#include <iostream>

using namespace std;

int main() {
  string accountNumber = "012345678910235", enteredAccountNumber;
  double balance = 30000, enteredBalance, towithdraw;
  char accountType;
  float charges = 0;

  while (1) {
    cout << "Enter account number: ";
    cin >> enteredAccountNumber;

    cout << "Enter account type (C for current, S for savings): ";
    cin >> accountType;

    if (enteredAccountNumber != accountNumber) {
      cout << "Invalid accpunt number!";
      return 1;
    }

    cout << "Enter amount you want to withdraw: ";
    cin >> enteredBalance;

    if (enteredBalance > 100000) {
      cout << "Cannot withdraw more than 100,000 at a time!" << endl;
      return 1;
    }

    switch (accountType) {
    case 'S':
      if (enteredBalance > 50000) {
        charges = enteredBalance * 0.02;
      } else {
        charges = enteredBalance * 0.05;
      }

      towithdraw = enteredBalance + charges;

      if (towithdraw > balance) {
        cout << "insufficient balance!" << endl;
        return 1;
      }

      balance -= towithdraw;
      cout << "Transaction completed" << "\n"
           << "Remaining Amount: " << balance << endl;
      break;

    case 'C':
      if (enteredBalance > 50000) {
        charges = 100;
      } else {
        charges = enteredBalance * 0.05;
      }

      towithdraw = enteredBalance + charges;

      if (towithdraw > balance) {
        cout << "insufficient balance!" << endl;
        return 1;
      }

      balance -= towithdraw;
      cout << "Transaction completed" << "\n"
           << "Remaining Amount: " << balance << endl;
      break;

    default:
      cout << "Invalid account type!" << endl;
      break;
    }
  }

  return 0;
}