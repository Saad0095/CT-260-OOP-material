#include <iostream>
using namespace std;

class Student {
private:
  string name;
  string rollNumber;
  int age;

public:
void introduce(){
    cout << "My name is " << this -> name << endl << "I am an NEDian" << endl;
}
  void setRollNo(string num) { 
    this->rollNumber = num; 
 }
  string getRollNo() const { 
    return this->rollNumber;
 }
};

int main() { 
    Student s1,s2;
    s1.setRollNo("CT-25245");
    cout << "Roll Number: " << s1.getRollNo();
    s1.setRollNo("CT-25246");
    cout << "Roll Number: " << s1.getRollNo();
    return 0;

}