#include <bits/stdc++.h>
using namespace std;

class GuestManagement {
private:
  set<string> names;

public:
  void addName(string n) { names.insert(n); }
  void display() {
    for (string n : names) {
      cout << n << ", ";
    }
    cout << endl;
    cout<< "Total no. of guests: " << names.size() << endl;
  }
};

int main() {
  GuestManagement gm;
  string name;
  char ch = 'y';
  while (ch == 'y' || ch == 'Y') {
    cout << "Enter name Guest: ";
    cin >> name;
    gm.addName(name);
    cout << "Do you want to continue entering (Y/N)?: ";
    cin >> ch;
  }
  gm.display();
  return 0;
}