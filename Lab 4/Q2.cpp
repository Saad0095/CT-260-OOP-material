// Create  a  class  called  DynamicArray.  The  class  should  contain  a
// pointer  to  the array, and size of the array as data members. Create the
// parameterized constructor which take size of the array as input and
// initializes all the values with 0. Create the member function “push” which
// takes value as  parameter and push it  to the end of the array. Create the
// member function size() which returns the size of the array.

#include <iostream>
using namespace std;

class DynamicArray {
private:
  int *arr;
  int sizeOfArr;

public:
  DynamicArray(int size) : sizeOfArr(size) {
    arr = new int[size];
    for (int i = 0; i < size; i++) {
      arr[i] = 0;
    }
  };
  int getSize() { return sizeOfArr; }
  void displayArray() {
    for (int i = 0; i < sizeOfArr; i++) {
      cout << arr[i] << "  ";
    }
    cout << "\n";
  }
  void push(int val) {
    for (int i = 0; i < sizeOfArr; i++) {
      if (arr[i] == 0) {
        arr[i] = val;
        break;
      }
      if (arr[i] != 0 && i == sizeOfArr - 1) {
        cout << "Array is full!" << endl;
        break;
      }
    }
  }
};

int main() {
  DynamicArray arr1(5);
  arr1.push(4);
  arr1.push(3);
  arr1.push(1);
  arr1.displayArray();
  cout << "Size of array: " << arr1.getSize();

  return 0;
}