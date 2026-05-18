#include <bits/stdc++.h>
using namespace std;

bool checkDigit(string pass) {
  for (char p : pass) {
    if (isdigit(p)) {
      return true;
    }
  }
  return false;
}

void login(string username, string pass) {
  if (pass.length() < 6 || !checkDigit(pass)) {
    throw "Password must contain at least 6 characters and one digit!";
  } else {
    cout << "Logged In Successfully!" << endl;
  }
}

int main() {
  string username, password;

  cout << "Enter username & password: ";
  cin >> username >> password;
  try {
    login(username, password);

  } catch (const char* msg) {
    cout << msg << '\n';
  }
}