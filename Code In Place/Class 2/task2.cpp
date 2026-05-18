#include <iostream>
using namespace std;

class DataUsage {
private:
  int dataMB;
  int sessions;

public:
  DataUsage() {
    dataMB = 200;
    sessions = 0;
  }
  void setDataMB(int usedData) { dataMB = usedData; }
  void updateDataMB(int usedData) {
    dataMB += usedData;
    sessions++;
  }
  int getDataMB() { return dataMB; }
  void setSessions(int s) { sessions = s; }
  int getSessions() { return sessions; }
};

int main() {
  int usedData;
  DataUsage device1;

  cout << "Orginial Data: " << device1.getDataMB() << "MB" << endl;
  cout << "Enter how much data you consumed: ";
  cin >> usedData;
  device1.updateDataMB(usedData);
  cout << "Updated Data: " << device1.getDataMB() << "MB" << endl;

  return 0;
}