#include <iostream>
#include <string.h>
using namespace std;

class DecryptionTecnique {
public:
  virtual string decrypt(string val) = 0;
};

class DecryptionTecnique1 : public DecryptionTecnique {
public:
  string decrypt(string msg) override {
    string result = "", temp = "";

    for (int i = 0; i < msg.length(); i++) {
      temp += msg[i];
      int val = stoi(temp);
      if (val >= 65) {
        result += char(val);
        temp = "";
      }
    }
    return result;
  }
};

class DecryptionTecnique2 : public DecryptionTecnique {
public:
  virtual string decrypt(string msg) {
    string result = "", temp = "";

    for (int i = 0; i < msg.length(); i++) {
      temp += msg[i];
      int val = stoi(temp);
      if (val >= 65) {
        result += char(val - 2);
        temp = "";
      }
    }
    return result;
  };
};

int main() {
  string msg;

  cout << "Enter Value to decrypt: ";
  cin >> msg;

  DecryptionTecnique1 d1;
  DecryptionTecnique2 d2;

  cout << "Using Technique 1: " << d1.decrypt(msg) << endl;
  cout << "Using Technique 2: " << d2.decrypt(msg) << endl;

  return 0;
}