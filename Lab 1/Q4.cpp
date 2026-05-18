#include <iostream>
using namespace std;
#define n 3

void inputMatrix(int A[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> A[i][j];
    }
  }
}

int sumMatrix(int A[n][n], int B[n][n], int sum[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      sum[i][j] = A[i][j] + B[i][j];
    }
  }
}

int mulMatrix(int A[n][n], int B[n][n], int mul[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        mul[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

void displayMatrix(int matrix[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << "   ";
    }
    cout << endl;
  }
}

int main() {
  int A[n][n], B[n][n], sum[n][n], mul[n][n];

  cout << "Enter elements of matrix A (3x3): ";
  inputMatrix(A);

  cout << "Enter elements of matrix B (3x3): ";
  inputMatrix(B);

  sumMatrix(A, B, sum);
  mulMatrix(A, B, mul);

  cout << "Sum of matrices is: ";
  displayMatrix(sum);

  cout << "Product of matrices is: ";
  displayMatrix(mul);

  return 0;
}
