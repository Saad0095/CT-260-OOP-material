#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("source.txt");
  ofstream fout("dest.txt");

  if (!fin.is_open()) {
    cout << "Source file can't open!" << endl;
    return 1;
  }

  char ch;
  while (fin.get(ch)) {
    fout.put(ch);
  }

  cout << "File copied successfully!";
  fin.close();
  fout.close();

  return 0;
}