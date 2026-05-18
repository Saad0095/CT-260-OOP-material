#include <bits/stdc++.h>
using namespace std;

bool isValid(string transac) {
  for (auto t : transac) {
    if (isalnum(t)) {
      return true;
    }
    return false;
  }
}

int main() {
  vector<string> transactions;
  set<string> uniqueTransac;

  int num;
  cout << "Enter no. of transactions: " << endl;
  cin >> num;

  try {
    for (int i = 0; i < num; i++) {
      string transac;
      cout << "Enter transaction number: ";
      cin >> transac;
      if (!isValid(transac)) {
        throw invalid_argument(
            "Transaction contains non-alphanumeric characters!");
      }
      transactions.push_back(transac);
    }
    for (string t : transactions) {
      uniqueTransac.insert(t);
    }

    sort(transactions.begin(), transactions.end());

    cout << "\nDisplaying sorted transactions: " << endl;
    for (string t : transactions) {
      cout << t << endl;
    }
    cout << "\nDisplaying unique transactions: " << endl;
    for (string t : uniqueTransac) {
      cout << t << endl;
    }
  } catch (invalid_argument e) {
    cout << e.what() << endl;
  }

  return 0;
}