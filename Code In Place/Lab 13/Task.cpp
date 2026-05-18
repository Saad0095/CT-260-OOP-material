#include <bits/stdc++.h>
using namespace std;

int main() {
  string title;
  int shelfNo;

  ofstream fout("library_log.txt", ios::app);
  if (!fout.is_open() || !fout.good()) {
    cout << "erron in opening file!" << endl;
    return 0;
  }
  cout << "Enter book title: ";
  getline(cin, title);
  cout << "Enter shelf Number: " << endl;
  cin >> shelfNo;

  fout << "\nBook Title: " << title << ", Shelf No: " << shelfNo << endl;
  fout.close();

  ifstream fin("library_log.txt");
  if (!fin.is_open() || !fin.good()) {
    cout << "Error in opening file!" << endl;
    return 0;
  }

  string line;
  while (getline(fin, line)) {
    cout << line << endl;
  }
  fin.close();
  return 0;
}
// #include <iostream>
// #include <fstream>
// #include <string>
// #include <limits>

// using namespace std;

// int main() {
//     string title;
//     int shelfNo;

//     fstream file;
//     file.open("library_log.txt", ios::app);

//     if (!file.good() || !file.is_open()) {

//         cout << "Error: File could not be opened!"
//              << endl;

//         return 0;
//     }

//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     cout << "Enter Book Title: ";
//     getline(cin, title);

//     cout << "Enter Shelf Number: ";
//     cin >> shelfNo;

//     file << "Book Title: " << title
//          << " | Shelf No: "
//          << shelfNo << endl;

//     file.close();

//     file.open("library_log.txt", ios::in);

//     cout << "\n** Library Log History **\n";

//     string line;

//     while (getline(file, line)) {
//         cout << line << endl;
//     }

//     file.close();

//     return 0;
// }