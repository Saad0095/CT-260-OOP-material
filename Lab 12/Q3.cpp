#include <bits/stdc++.h>
using namespace std;

class Person {
private:
  char name[50];
  int age;

public:
  Person(const char n[] = "", int a = 0) : age(a) {
    int i = 0;
    while (n[i] != '\0') {
      name[i] = n[i];
      i++;
    }
    name[i] = '\0';
  }
  void display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

int main() {
  Person p1("Saad Bon Khalid", 18);
  ofstream fout("person.bin", ios::binary);
  if (!fout.is_open()) {
    cout << "Error in opening file!";
    return 1;
  }

  fout.write((char *)&p1, sizeof(p1));
  cout << "\nSuccessfully wrote file!" << endl;
  fout.close();
  p1.display();

  Person p2;

  ifstream fin("person.bin", ios::binary);
  if (!fin.is_open()) {
    cout << "Error in opening file!";
    return 1;
  }
  fin.read((char *)&p2, sizeof(p2));
  cout << "\nSuccessfully read file!" << endl;
  fin.close();

  p2.display();
  return 0;
}