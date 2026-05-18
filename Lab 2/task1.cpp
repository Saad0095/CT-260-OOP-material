#include <iostream>
using namespace std;

class Student {
private:
  string name;
  string rollNo;
  int semester;
  char section;

public:
  void setName(string n) { name = n; }
  void setRollNo(string r) { rollNo = r; }
  void setSemester(int s) { semester = s; }
  void setSection(char sec) { section = sec; }
  string getName() { return name; }
  string getRollNo() { return rollNo; }
  int getSemester() { return semester; }
  char getSection() { return section; }
};

int main() {
  int n = 4;
  Student students[n];

  for (int i = 0; i < n; i++) {
    string name, roll;
    int sem;
    char sec;

    cout << "\nStudent " << i + 1 << ": " << endl;
    cout << "Name: ";
    cin >> name;

    cout << "Roll No: ";
    cin >> roll;

    cout << "Semester: ";
    cin >> sem;

    cout << "Section: ";
    cin >> sec;

    students[i].setName(name);
    students[i].setRollNo(roll);
    students[i].setSemester(sem);
    students[i].setSection(sec);
  }

  cout << "\nStudents from Section A:\n";
  for (int i = 0; i < n; i++) {
    if (students[i].getSection() == 'A' || students[i].getSection() == 'a') {
      cout << "Name: " << students[i].getName() << endl;
      cout << "Roll No: " << students[i].getRollNo() << endl;
      cout << "Semester: " << students[i].getSemester() << endl;
      cout << "Section: " << students[i].getSemester() << endl;
    }
  }

  return 0;
}
