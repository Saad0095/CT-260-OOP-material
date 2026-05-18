// Model a School system involving Classrooms and Students.
// A School is made up of several Classrooms. If the School building is
// demolished, the Classrooms are gone. The School has Students enrolled in it.
// If the School closes, the Students do not cease to exist; they simply move to
// a different school. Create the necessary classes. Ensure that your
// implementation of Classroom within School and Student within School correctly
// reflects the strength of their respective relationships. Show through code
// that deleting the School object affects one but not the other.
#include <iostream>
using namespace std;

class Student {
private:
  string name;

public:
  Student(string n) : name(n) { cout << "Student " << name << " created\n"; }
  ~Student() { cout << "Student " << name << " destroyed\n"; }
};

class Classroom {
private:
  int roomNo;
    static int count;
public:
  Classroom() {
    roomNo = ++count;
    cout << "Classroom " << roomNo << " created\n";
  }
  ~Classroom() { cout << "Classroom " << roomNo << " destroyed\n"; }
};

int Classroom::count = 0;

class School {
private:
  Classroom classrooms[3];
  Student *students[10];
  int studCount;
  int classCount;

public:
  School() : studCount(0), classCount(0) { cout << "School created\n"; }

  void enrollStudent(Student *s) {
    students[studCount++] = s;
    cout << "Student Enrolled!" << endl;
  }

  ~School() { cout << "School destroyed\n"; }
};

int main() {
  Student *s1 = new Student("Abdullah");
  Student *s2 = new Student("Saad");

  {
    School school;

    school.enrollStudent(s1);
    school.enrollStudent(s2);

    cout << "\nSchool Demolishing...\n";
  }
  cout << "\nStudents still exists!\n";
  cout << "\nDestroying Students!\n";

  delete s1;
  delete s2;
  return 0;
}