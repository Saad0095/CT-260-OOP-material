#include <iostream>
using namespace std;

class Database {
private:
  static int connectedUsers; // will retain its value for every obj

public:
  Database() { connectedUsers++; }
  static void showConnectedUsers() {
    cout << "No. of users: " << connectedUsers << endl;
  }
  static int getConnectedUsers() { return connectedUsers; }
};

int Database ::connectedUsers = 0;

int main() {
  Database :: showConnectedUsers();
  Database d1, d2, d3;

  cout << "No. of users: " << d1.getConnectedUsers() << endl;

  Database d4;
  cout << "No. of users: " << Database ::getConnectedUsers() << endl;
  return 0;
}