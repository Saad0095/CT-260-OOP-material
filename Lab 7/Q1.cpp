#include <iostream>
using namespace std;

class Matrix {
private:
    int nRows, nCols;
    int **arr;

    void allocate() {
        arr = new int*[nRows];
        for (int i = 0; i < nRows; i++)
            arr[i] = new int[nCols]{0};
    }

public:
    Matrix() : nRows(0), nCols(0), arr(nullptr) {}

    Matrix(int r, int c) : nRows(r), nCols(c) {
        allocate();
    }

    Matrix(const Matrix &other) : nRows(other.nRows), nCols(other.nCols) {
        allocate();
        for (int i = 0; i < nRows; i++)
            for (int j = 0; j < nCols; j++)
                arr[i][j] = other.arr[i][j];
    }

    Matrix& operator=(const Matrix &other) {
        if (this != &other) {
            for (int i = 0; i < nRows; i++)
                delete[] arr[i];
            delete[] arr;

            nRows = other.nRows;
            nCols = other.nCols;
            allocate();

            for (int i = 0; i < nRows; i++)
                for (int j = 0; j < nCols; j++)
                    arr[i][j] = other.arr[i][j];
        }
        return *this;
    }

    Matrix operator+(const Matrix &other) {
        Matrix result(nRows, nCols);
        for (int i = 0; i < nRows; i++)
            for (int j = 0; j < nCols; j++)
                result.arr[i][j] = arr[i][j] + other.arr[i][j];
        return result;
    }

    Matrix operator-(const Matrix &other) {
        Matrix result(nRows, nCols);
        for (int i = 0; i < nRows; i++)
            for (int j = 0; j < nCols; j++)
                result.arr[i][j] = arr[i][j] - other.arr[i][j];
        return result;
    }

    Matrix operator*(const Matrix &other) {
        Matrix result(nRows, other.nCols);
        for (int i = 0; i < nRows; i++)
            for (int j = 0; j < other.nCols; j++) {
                result.arr[i][j] = 0;
                for (int k = 0; k < nCols; k++)
                    result.arr[i][j] += arr[i][k] * other.arr[k][j];
            }
        return result;
    }

    int* operator[](int i) {
        return arr[i];
    }

    void input() {
        cout << "Enter elements for a " << nRows << "x" << nCols << " matrix (row-wise):\n";
        for (int i = 0; i < nRows; i++)
            for (int j = 0; j < nCols; j++)
                cin >> arr[i][j];
    }

    void display() {
        for (int i = 0; i < nRows; i++) {
            for (int j = 0; j < nCols; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }

    ~Matrix() {
        for (int i = 0; i < nRows; i++)
            delete[] arr[i];
        delete[] arr;
    }
};

int main() {
    Matrix matA(2, 2), matB(2, 2);
    cout << "Enter elements for first 2x2 matrix (A):\n";
    matA.input();
    cout << "Enter elements for second 2x2 matrix (B):\n";
    matB.input();

    Matrix sum = matA + matB;
    Matrix diff = matA - matB;
    Matrix prod = matA * matB;

    cout << "Sum of matrices (A + B):\n";
    sum.display();
    cout << "Difference of matrices (A - B):\n";
    diff.display();
    cout << "Product of matrices (A * B):\n";
    prod.display();

    Matrix copyA = matA;
    Matrix copyB;
    copyB = matB;

    cout << "First element of A: " << matA[0][0] << endl;

    return 0;
}