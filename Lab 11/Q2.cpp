#include <bits/stdc++.h>
using namespace std;
class Stack {
private:
  vector<string> str;

public:
  void push(string s) { str.push_back(s); }
  void pop() {
    if (!str.empty())
     str.pop_back();
 }
  string peek() {
    if (!str.empty())
      return str.back();
    return "";
  }
  void reverseWords() {
    for (string &s : str) {
      reverse(s.begin(), s.end());
    }
  }
  void display() {
    for (string s : str) {
      cout << s << " ";
    }
    cout << endl;
  }
};

int main() {
  Stack s1;
  s1.push("Saad");
  s1.push("is");
  s1.push("in");
  s1.push("NED");
  s1.display();

  cout << "Last Word: " << s1.peek() << endl;
  s1.pop();
  s1.reverseWords();
  s1.display();
  return 0;
}