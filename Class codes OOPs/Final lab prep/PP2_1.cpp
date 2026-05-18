#include <bits/stdc++.h>
using namespace std;

template <typename T> class MatrixAnalyzer;

class MatrixException {
private:
  string msg;

public:
  MatrixException(string m) : msg(m) {};
  string what() { return msg; }
};

template <typename T> class Matrix {
private:
  vector<vector<T>> mat;
  int rows, cols;

public:
  Matrix(int r, int c) {
    if (r <= 0 || c <= 0) {
      throw MatrixException("Invalid matrix dimensions!");
    }
    rows = r;
    cols = c;
    mat.resize(rows, vector<T>(cols));
  }
  vector<T> &operator[](int i) {
    if (i < 0 || i >= rows) {
      throw MatrixException("Row index out of bounds!");
    }
    return mat[i];
  };

  Matrix operator+(Matrix &obj) {
    if (rows != obj.rows || cols != obj.cols) {
      throw MatrixException("Matrix dimensions must match for addition!");
    }
    Matrix temp(rows, cols);
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        temp.mat[i][j] = mat[i][j] + obj.mat[i][j];
      }
    }
    return temp;
  }

  void sortRows() {
    for (int i = 0; i < rows; i++) {
      sort(mat[i].begin(), mat[i].end());
    }
  }

  void display() {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        cout << mat[i][j] << "\t";
      }
      cout << endl;
    }
  }
  friend class MatrixAnalyzer<T>;
};

template <typename T> class MatrixAnalyzer {
public:
  bool isSymmetric(Matrix<T> &m) {
    if (m.rows != m.cols) {
      throw MatrixException("ROws != Columns");
    }
    for (int i = 0; i < m.rows; i++) {
      for (int j = 0; j < m.cols; j++) {
        if (m[i][j] != m[j][i]) {
          return false;
        }
      }
    }
    return true;
  }
};

int main() {
  try {
    Matrix<int> A(2, 2);
    Matrix<int> B(2, 2);

    A[0][0] = 1;
    A[0][1] = 2;
    A[1][0] = 2;
    A[1][1] = 1;

    B[0][0] = 5;
    B[0][1] = 6;
    B[1][0] = 7;
    B[1][1] = 8;

    cout << "Matrix A:\n";
    A.display();

    cout << "\nMatrix B:\n";
    B.display();

    Matrix<int> C = A + B;

    cout << "\nA + B:\n";
    C.display();

    MatrixAnalyzer<int> analyzer;

    if (analyzer.isSymmetric(A)) {
      cout << "\nMatrix A is Symmetric\n";
    } else {
      cout << "\nMatrix A is NOT Symmetric\n";
    }

    cout << "\nSorted Matrix B:\n";

    B.sortRows();

    B.display();

    Matrix<double> D(2, 2);

    D[0][0] = 1.1;
    D[0][1] = 4.5;
    D[1][0] = 2.2;
    D[1][1] = 3.3;

    cout << "\nDouble Matrix:\n";

    D.display();

    cout << "\nTesting Exception:\n";
    D[5][0] = 100;

  }

  catch (MatrixException &e) {
    cout << "\nMatrix Exception: " << e.what() << endl;
  }

  return 0;
}