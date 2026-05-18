#include <bits/stdc++.h>
using namespace std;

void manualSort(vector<int> &arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = i; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int N;
  cout << "Enter no. of elements: ";
  cin >> N;
  vector<int> intArr1(N), intArr2(N);
  cout << "Enter elements: ";
  for (int i = 0; i < N; i++) {
    cin >> intArr1[i];
    intArr2[i] = intArr1[i];
  }

  clock_t t1_start = clock();
  manualSort(intArr1);
  clock_t t1_end = clock();

  clock_t t2_start = clock();
  sort(intArr2.begin(), intArr2.end());
  clock_t t2_end = clock();

  double time_manual = double(t1_end - t1_start) / CLOCKS_PER_SEC;

  double time_stl = double(t2_end - t2_start) / CLOCKS_PER_SEC;

  cout << "Manual Sort Time: " << time_manual << endl;
  cout << "STL Sort Time: " << time_stl << endl;
  return 0;
}