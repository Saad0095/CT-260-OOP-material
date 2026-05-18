#include <iostream>
using namespace std;

template <typename T> T findLarger(T num1, T num2) {
  return num1 > num2 ? num1 : num2;
}

template <typename T> class DataBox {
private:
  T value;

public:
  DataBox(T v) : value(v) {};
  void getValue() { cout << "The value is " << value << endl; }
};

template <> class DataBox<char> {
private:
  char value;

public:
  DataBox(char v) : value(v) {};
  void getValue() {
    cout << "The value is " << value << endl;
    cout << "The ASCII value is " << int(value) << endl;
  }
};

int main() {
  int num1 = 10, num2 = 20;
  float num3 = 10.46, num4 = 20.78;
  double val = 5.02102;
  DataBox<double> d1(val);
  d1.getValue();
  DataBox<char> d2('a');
  d2.getValue();

  cout << "Larger value in " << num1 << " and " << num2 << " is "
       << findLarger(num1, num2) << endl;
  cout << "Larger value in " << num3 << " and " << num4 << " is "
       << findLarger(num3, num4) << endl;
  return 0;
}