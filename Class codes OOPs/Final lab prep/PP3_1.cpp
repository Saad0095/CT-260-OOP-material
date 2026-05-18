#include <iostream>
#include <vector>

using namespace std;

// Forward Declaration
template <typename T>
class Array;

template <typename T>
T sum(Array<T>&);

class ArrayException {
private:
    string message;

public:
    ArrayException(string msg) {
        message = msg;
    }

    string what() {
        return message;
    }
};

template <typename T>
class Array {
private:
    vector<T> arr;
    int size;

public:
    Array(int s) {

        if (s <= 0) {
            throw ArrayException("Invalid array size.");
        }

        size = s;

        arr.resize(size);
    }

    T& operator[](int index) {

        if (index < 0 || index >= size) {
            throw ArrayException("Index out of bounds.");
        }

        return arr[index];
    }

    friend T sum<T>(Array<T>&);
};

template <typename T>
T sum(Array<T>& a) {

    T total = 0;

    for (int i = 0; i < a.size; i++) {
        total += a.arr[i];
    }

    return total;
}

int main() {
    try {
        Array<int> a(5);
        a[0] = 10;
        a[1] = 20;
        a[2] = 30;
        a[3] = 40;
        a[4] = 50;
        cout << "Array Elements:\n";
        for (int i = 0; i < 5; i++) {
            cout << a[i] << " ";
        }
        cout << "\n\nSum = "
             << sum(a) << endl;

        cout << a[10];
    }

    catch (ArrayException &e) {
        cout << "\nException Caught: "
             << e.what() << endl;
    }

    return 0;
}