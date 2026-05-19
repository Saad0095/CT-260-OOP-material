#include <bits/stdc++.h>
using namespace std;

template <typename T> class Matrix;

template <typename T> T maxElement(Matrix<T> &);

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
      throw MatrixException("Inavlid mat size");
    }
    rows = r;
    cols = c;
    mat.resize(rows, vector<T>(cols));
  }
  vector<T> &operator[](int i) {
    if (i < 0 || i > rows) {
      throw MatrixException("Invalid index");
    }
    return mat[i];
  }
  void sortCols() {
    for (int j = 0; j < cols; j++) {
      vector<T> temp;
      for (int i = 0; i < rows; i++) {
        temp.push_back(mat[i][j]);
      }
      sort(temp.begin(), temp.end());
      for (int i = 0; i < rows; i++) {
        mat[i][j] = temp[i];
      }
    }
  }

  void sortRows() {
    for (int i = 0; i < rows; i++) {
      sort(mat[i].begin(), mat[i].end());
    }
  }
  void display() {

    for (int i = 0; i < rows; i++) {

      for (int j = 0; j < cols; j++) {

        cout << mat[i][j] << " ";
      }

      cout << endl;
    }
  }
  friend T maxElement<T>(Matrix<T> &);
};

template <typename T> T maxElement(Matrix<T> &obj) {
  int max = obj.mat[0][0];
  for (int i = 0; i < obj.rows; i++) {
    for (int j = 0; j < obj.cols; j++) {
      if (max < obj.mat[i][j]) {
        max = obj.mat[i][j];
      }
    }
  }
  return max;
};

int main() {
  try {
    Matrix<int> A(2, 2);
    Matrix<int> B(2, 2);

    A[0][0] = 10;
    A[0][1] = 5;
    A[1][0] = 9;
    A[1][1] = 8;

    B[0][0] = 160;
    B[0][1] = 65;
    B[1][0] = 69;
    B[1][1] = 68;

    cout << "Matrix A: " << endl;
    A.display();

    cout << "Max elementin matrix A" << maxElement(A) << endl;
    A.sortCols();
    cout << "\nMatrix A After Column Sorting:\n";
    A.display();
    A.sortRows();
    cout << "\nMatrix A After Row Sorting:\n";
    A.display();
  } catch (MatrixException &e) {
    cout << e.what() << '\n';
  }
}