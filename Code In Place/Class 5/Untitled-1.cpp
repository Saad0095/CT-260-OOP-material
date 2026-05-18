// Build a system to manage different types of media files.
// 1.Class MediaFile: The base class containing a filename.
// 2.Class Playable: Inherits from MediaFile. It adds a duration
// (Single Inheritance).
// 3.Class Video: Inherits from Playable. It adds resolution
// (Multilevel Inheritance).
// 4.Class Image: Inherits from MediaFile. It adds dimensions
// (Hierarchical Inheritance).

// To implement this scenario properly, you need to add specific
// Member Functions that demonstrate how data from the base
// classes is utilized in the derived classes.

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  long n, k;
  cin >> n >> k;

  long remainder = n % k;
  cout << remainder << endl;
  long add = (remainder == 0 ? 0 : k - remainder);
  cout << add << "\n";

  string str = "121";
  string rev = str;
  reverse(rev.begin(), rev.end());
  if (str == rev)
    cout << "Palindrome";
  else
    cout << "Not a Palindrome";
}