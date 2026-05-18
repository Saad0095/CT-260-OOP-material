#include <bits/stdc++.h>
using namespace std;

void countLines() {
  ifstream fin("STORY.TXT");
  if (!fin.is_open()) {
    cout << "Failed to open file!";
    return;
  }

  int count = 0;
  string line;
  while (getline(fin, line)) {
    if (line[0] != 'a' && line[0] != 'A') {
      count++;
    }
  }
  cout << "NO. of lines not starting from 'A' are " << count << endl;
  fin.close();
}

int main() {
  countLines();
  return 0;
}