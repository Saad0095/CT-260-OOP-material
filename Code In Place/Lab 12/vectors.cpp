#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> readings;
  readings.push_back(10);
  readings.push_back(20);
  readings.push_back(30);
  cout << "Current size: " << readings.size() << std::endl;
  if (!readings.empty()) {
    cout << "Last element (back): " << readings.back() << endl;
  }
  readings.pop_back();
  cout << "Size after pop_back: " << readings.size() << endl;
  cout << "New last element: " << readings.back() << endl;
  readings.clear();
  cout << "Size after clear: " << readings.size() << endl;
  return 0;
}
