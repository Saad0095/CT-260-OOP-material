#include <iostream>
using namespace std;

class Character {
private:
  int *health;
  int *attackPower;
  int *defense;

public:
  Character() {
    health = new int;
    *health = 0;
    attackPower = new int;
    *attackPower = 0;
    defense = new int;
    *defense = 0;
  }
  Character(int h, int att, int def) {
    health = new int;
    *health = h;
    attackPower = new int;
    *attackPower = att;
    defense = new int;
    *defense = def;
  }
  Character(const Character &obj) {
    health = new int;
    *health = *(obj.health);
    attackPower = new int;
    *attackPower = *(obj.attackPower);
    defense = new int;
    *defense = *(obj.defense);
  }

  void setHealth(int h) { *health = h; }
  int getHealth() { return *health; }
  void setAttackPower(int attack) { *attackPower = attack; }
  int getAttackPower() { return *attackPower; }
  void setDefense(int def) { *defense = def; }
  int getDefense() { return *defense; }

  void display() {
    cout << "Health: " << *health << ", Attack: " << *attackPower
         << ", Defense: " << *defense << endl;
  }

  ~Character() {
    delete health;
    delete attackPower;
    delete defense;
  }
};

int main() {
  Character charac1;              // Default Constructor
  Character charac2(100, 95, 60); // Parameterized Constructor
  Character charac3(charac2);     // Copy Constructor

  cout << "Character 1: (Default Constructor)" << endl;
  charac1.display();
  cout << "Character 2: (Parameterized Constructor)" << endl;
  charac2.display();
  charac3.setDefense(70);
  cout << "Character 3: (Copy Constructor)" << endl;
  charac3.display();
  return 0;
}

// In a virtual battle arena game called "Epic Clash," players control powerful
// characters to engage in intense battles against each other. Each character
// has distinct abilities and attributes, including health, attack power, and
// defense. Your task is to implement the Character class to encapsulate these
// attributes, provide getter and setter methods for them, and offer different
// constructors to create characters with various starting conditions.
// Encapsulation: Ensure that the character's attributes (health, attackPower,
// and defense) are private to the Character class, accessible only through
// appropriate getter and setter methods, allocated memory dynamically in heap.
// Constructors: Implement three constructors: A default constructor that
// initializes a character with standard starting values for health, attack
// power, and defense. A parameterized constructor that allows specifying custom
// values for health, attack power, and defense. A copy constructor that creates
// a new Character object by copying the data from an existing Character object.