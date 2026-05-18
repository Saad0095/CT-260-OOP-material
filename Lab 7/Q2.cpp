#include <iostream>
using namespace std;

class Matrix {
private:
    int nRows, nCols;
    int **arr;

public:
    Matrix() : nRows(0), nCols(0), arr(nullptr) {}

    Matrix(int r, int c) : nRows(r), nCols(c) {
        arr = new int*[nRows];
        for (int i = 0; i < nRows; i++)
            arr[i] = new int[nCols]{0};
    }

    Matrix(const Matrix &other) : nRows(other.nRows), nCols(other.nCols) {
        arr = new int*[nRows];
        for (int i = 0; i < nRows; i++)
            arr[i] = new int[nCols];

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

            arr = new int*[nRows];
            for (int i = 0; i < nRows; i++)
                arr[i] = new int[nCols];

            for (int i = 0; i < nRows; i++)
                for (int j = 0; j < nCols; j++)
                    arr[i][j] = other.arr[i][j];
        }
        return *this;
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

    bool search(int value) {
        int left = 0, right = nRows * nCols - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            int r = mid / nCols;
            int c = mid % nCols;

            if (arr[r][c] == value)
                return true;
            else if (arr[r][c] < value)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }

    ~Matrix() {
        for (int i = 0; i < nRows; i++)
            delete[] arr[i];
        delete[] arr;
    }
};

int main() {
    Matrix mat(3, 4);
    mat.input();

    int num;
    cout << "Enter number to search: ";
    cin >> num;

    if (mat.search(num))
        cout << "true";
    else
        cout << "false";

    return 0;
}