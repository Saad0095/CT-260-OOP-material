#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Forward Declaration
template <typename T>
class Matrix;

template <typename T>
T maxElement(Matrix<T>&);

// Custom Exception
class MatrixException {
private:
    string message;

public:
    MatrixException(string msg) {
        message = msg;
    }

    string what() {
        return message;
    }
};

// Template Matrix Class
template <typename T>
class Matrix {
private:
    vector<vector<T>> data;
    int rows, cols;

public:

    // Constructor
    Matrix(int r, int c) {

        if (r <= 0 || c <= 0) {
            throw MatrixException("Invalid matrix dimensions.");
        }

        rows = r;
        cols = c;

        data.resize(rows, vector<T>(cols));
    }

    // Safe operator[]
    vector<T>& operator[](int index) {

        if (index < 0 || index >= rows) {
            throw MatrixException("Row index out of bounds.");
        }

        return data[index];
    }

    // Matrix Addition
    Matrix operator+(Matrix &other) {

        if (rows != other.rows || cols != other.cols) {
            throw MatrixException("Matrix dimensions must match for addition.");
        }

        Matrix result(rows, cols);

        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < cols; j++) {

                result.data[i][j] =
                    data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    // Sort Each Column
    void sortColumns() {

        for (int j = 0; j < cols; j++) {

            vector<T> temp;

            // Copy column
            for (int i = 0; i < rows; i++) {
                temp.push_back(data[i][j]);
            }

            // Sort column
            sort(temp.begin(), temp.end());

            // Put back
            for (int i = 0; i < rows; i++) {
                data[i][j] = temp[i];
            }
        }
    }

    // Display Matrix
    void display() {

        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < cols; j++) {

                cout << data[i][j] << " ";
            }

            cout << endl;
        }
    }

    // Friend Function
    friend T maxElement<T>(Matrix<T>&);
};

// Friend Function Definition
template <typename T>
T maxElement(Matrix<T>& m) {

    T maxVal = m.data[0][0];

    for (int i = 0; i < m.rows; i++) {

        for (int j = 0; j < m.cols; j++) {

            if (m.data[i][j] > maxVal) {
                maxVal = m.data[i][j];
            }
        }
    }

    return maxVal;
}

// Main Function
int main() {

    try {

        Matrix<int> m1(2, 2);
        Matrix<int> m2(2, 2);

        // Input values
        m1[0][0] = 1;
        m1[0][1] = 4;
        m1[1][0] = 3;
        m1[1][1] = 2;

        m2[0][0] = 5;
        m2[0][1] = 6;
        m2[1][0] = 7;
        m2[1][1] = 8;

        cout << "Matrix 1:\n";
        m1.display();

        cout << "\nMatrix 2:\n";
        m2.display();

        // Matrix Addition
        Matrix<int> sum = m1 + m2;

        cout << "\nSum Matrix:\n";
        sum.display();

        // Max Element
        cout << "\nMaximum Element in Matrix 1: "
             << maxElement(m1) << endl;
        cout << "\nMaximum Element in Matrix 2: "
             << maxElement(m2) << endl;

        // Sort Columns
        m1.sortColumns();

        cout << "\nMatrix 1 After Column Sorting:\n";
        m1.display();

        // Exception Test
        cout << m1[5][0];

    }

    catch (MatrixException &e) {

        cout << "\nException Caught: "
             << e.what() << endl;
    }

    return 0;
}