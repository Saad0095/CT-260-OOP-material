#include <iostream>
using namespace std;

class Vault {
private:
  const int lockerNumber;
  static int bankBranchCode;

public:
  Vault() : lockerNumber(0) { bankBranchCode++; }
  Vault(int num) : lockerNumber(num) { bankBranchCode++; }
  void view() const {
    cout << "Locker Number: " << lockerNumber << endl;
    cout << "Bank Branch Code: " << bankBranchCode << endl;
  }
  void modify(int l, int b) { bankBranchCode = b; }
};

int Vault ::bankBranchCode = 0;

int main() {
  const Vault v1, v2(4), v4;
  v1.view();
//   v1.modify(5);
  return 0;
}