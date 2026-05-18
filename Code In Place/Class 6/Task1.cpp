
// Create a base class called Animal that contains a string data member trait.
// Implement Function Overloading by creating two versions of a setDetails()
// method: one that only sets the trait name, and another that sets both the
// trait and an integer age. Next, implement Operator Overloading for the +
// operator so that adding two Animal objects returns a new Animal whose trait
// is a combination of both (e.g.,

// "Brave" + "Fast" = "Brave & Fast"). Finally, define a virtual function

// makeSound() function in the Animal class that prints "Generic Sound" and
// Override it in a derived class called Lion to print "Roar!". In your main
// function, demonstrate all three concepts by using an Animal pointer to call
// the Lion's sound.
#include <iostream>
using namespace std;

class Animal {
private:
  string trait;
  int age;

public:
  int setDetails(string t) { trait = t; }
  int setDetails(string t, int a) {
    trait = t;
    age = a;
  }
  string getTrait() { return trait; }
  int getAge() { return age; }

  Animal operator+(const Animal &obj) {
    Animal temp;
    temp.trait = trait + " & " + obj.trait;
    return temp;
  }
  virtual void makeSound() { cout << "Generic Sound" << endl; }
};

class Lion : public Animal {
public:
  void makeSound() { cout << "Roar!" << endl; }
};

int main() {
  // Function Overloading
  Animal a1, a2;
  a1.setDetails("Brave");
  a2.setDetails("Fast", 5);

  cout << "Animal 1 Trait: " << a1.getTrait() << endl;
  cout << "Animal 2 Trait: " << a2.getTrait() << ", Age: " << a2.getAge()
       << endl;

  // Operator Overloading
  Animal a3 = a1 + a2;
  cout << "Traits of Animal 3: " << a3.getTrait();

  // Function Overriding
  Animal *aniPtr;
  Lion l1;
  aniPtr = &l1;
  aniPtr -> makeSound();
  return 0;
}