#include <iostream>
#include <string.h>
using namespace std;

class EncryptionTecnique {
public:
  virtual string encrypt(string val) = 0;
};

class EncryptionTecnique1 : public EncryptionTecnique {
public:
  virtual string encrypt(string val) {
    string result = "";
    for (int i = 0; i < val.length(); i++) {
      result += to_string(int(val[i]));
    }
    return result;
  };
};

class EncryptionTecnique2 : public EncryptionTecnique {
public:
  virtual string encrypt(string val) {
    string result = "";
    for (int i = 0; i < val.length(); i++) {
      result += to_string(int(val[i]) + 2);
    }
    return result;
  };
};

int main() {
  string msg;

  cout << "Enter Message: ";
  cin >> msg;

  EncryptionTecnique1 e1;
  EncryptionTecnique2 e2;

  cout << "Using Technique 1: " << e1.encrypt(msg) << endl;
  cout << "Using Technique 2: " << e2.encrypt(msg) << endl;

  return 0;
}