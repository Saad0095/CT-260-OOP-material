// Write  a  program  in  which  a  class  named  Account  has  private  member
// variables named  account_no  ,account_bal  ,security_code.  Use  a  public
// function  to  initialize the variables and print all data. Keep track of
// number of objects using the keyword static.

#include <iostream>
using namespace std;
class Account {
private:
  int account_no;
  double account_bal;
  int security_code;
  static int count;

public:
  void setData(int no, double bal, int code) {
    account_no = no;
    account_bal = bal;
    security_code = code;
    count++;
  }
  void display() {
    cout << account_no << " " << account_bal << " " << security_code << endl;
  }
  static void showCount() { cout << count << endl; }
};

int Account::count = 0;

int main() {
  Account a1, a2;
  a1.setData(1, 30000, 894);
  a2.setData(2, 50000, 626);
  a1.display();
  a2.display();
  Account::showCount();
}