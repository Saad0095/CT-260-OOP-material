#include <iostream>
using namespace std;

class ArrayMultiplier {
public:
    virtual void calculate() = 0;
};

class ArrayMultiplier1D : public ArrayMultiplier {
private:
    int arr1[3];
    int arr2[3];

public:
    ArrayMultiplier1D(int a[3], int b[3]) {
        for (int i = 0; i < 3; i++) {
            arr1[i] = a[i];
            arr2[i] = b[i];
        }
    }

    virtual void calculate() {
        int result[3];

        for (int i = 0; i < 3; i++) {
            result[i] = arr1[i] * arr2[i];
        }

        cout << "Result of 1D Multiplication is: ";

        for (int i = 0; i < 3; i++) {
            cout << result[i] << " ";
        }

        cout << endl;
    }
};

class ArrayMultiplier2D : public ArrayMultiplier {
private:
    int arr1[3][3];
    int arr2[3][3];

public:
    ArrayMultiplier2D(int a[3][3], int b[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr1[i][j] = a[i][j];
                arr2[i][j] = b[i][j];
            }
        }
    }

    virtual void calculate() {
        int result[3][3] = {0};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        cout << "Result of 2D Multiplication is:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int a[] = {3, 5, 7};
    int b[] = {5, 7, 8};
    ArrayMultiplier1D arr1(a, b);
    arr1.calculate();

    int c[3][3] = {
        {3, 5, 7},
        {5, 7, 8},
        {1, 2, 3}
    };

    int d[3][3] = {
        {5, 7, 8},
        {4, 8, 7},
        {1, 2, 3}
    };
    ArrayMultiplier2D arr2(c, d);
    arr2.calculate();

    return 0;
}