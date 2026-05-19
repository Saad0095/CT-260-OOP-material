#include <bits/stdc++.h>
using namespace std;

template <typename T> class Array;

template <typename T> T sumElements(Array<T> &);

class ArrayException {
private:
  string msg;

public:
  ArrayException(string m) : msg(m) {}
  string what() { return msg; }
};

template <typename T> class Array {
private:
  vector<T> arr;
  int size;

public:
  Array(int s) {
    if (s <= 0) {
      throw ArrayException("Invalid array size");
    }
    size = s;
    arr.resize(size);
  }

  T &operator[](int i) {
    if (i < 0 || i >= size) {
      throw ArrayException("Invalid index!");
    }
    return arr[i];
  }

  void display() {
    for (int i = 0; i < size; i++) {
      cout << arr[i] << "\t";
    }
    cout << endl;
  }

  friend T sumElements<T>(Array<T> &);
  ~Array() {}
};

template <typename T> T sumElements(Array<T> &arr) {
  T sum = 0;
  for (int i = 0; i < arr.size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  try {
    Array<int> arr(5);
    arr[0] = 2;
    arr[1] = 4;
    arr[2] = 5;
    arr[3] = 1;
    arr[4] = 8;
    arr.display();
    cout << "Sum of array is " << sumElements(arr) << endl;
    cout << arr[10];
  } catch (ArrayException &e) {
    cout << e.what();
  }

  return 0;
}

// int main() {
//     try {
//         Array<int> a(5);
//         a[0] = 10;
//         a[1] = 20;
//         a[2] = 30;
//         a[3] = 40;
//         a[4] = 50;
//         cout << "Array Elements:\n";
//         for (int i = 0; i < 5; i++) {
//             cout << a[i] << " ";
//         }
//         cout << "\n\nSum = "
//              << sum(a) << endl;

//         cout << a[10];
//     }

//     catch (ArrayException &e) {
//         cout << "\nException Caught: "
//              << e.what() << endl;
//     }

//     return 0;
// }