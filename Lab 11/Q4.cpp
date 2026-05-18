#include <bits/stdc++.h>
using namespace std;

class ScoreManagement {
private:
  map<string, float> scores;

public:
  void addStdScore(string name, float marks) { scores[name] = marks; }
  float getStdScore(string name, float marks) { return scores.at(name); }
  void updateStdScore(string name, float marks) { scores[name] = marks; }
  void deleteStdScore(string name) { scores.erase(name); }
  void display() {
    cout << "\n";
    for (auto s : scores) {
      cout << s.first << " marks are " << s.second << endl;
    }
  }
};

int main() {
  ScoreManagement sc;
  string name;
  float marks;
  char ch = 'y';
  while (ch == 'y' || ch == 'Y') {
    cout << "Enter name of Student: ";
    cin >> name;
    cout << "Enter marks of Student: ";
    cin >> marks;
    sc.addStdScore(name, marks);
    cout << "Do you want to continue (Y/N)?: ";
    cin >> ch;
  }

  sc.display();
  sc.deleteStdScore("Hassaan");
  sc.display();
  return 0;
}