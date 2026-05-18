// In this task, create a base class GameCharacter that holds a health attribute
// and a function to display it. From this, derive two classes: Warrior (with a
// physicalAttack() function) and Mage (with a castSpell() function). Both must
// inherit from GameCharacter using virtual inheritance. Finally, create a child
// class BattleMage that inherits from both. The goal is to ensure that when a
// BattleMage takes damage, it reduces a single, shared health pool rather than
// having separate health bars for its "Warrior side" and its "Mage side." Write
// a program where a BattleMage is initialized, set its health, and call
// functions from all three levels of the hierarchy to prove the memory
// structure is unified and the Diamond Problem is resolved.

#include <iostream>
using namespace std;

class GameCharacter {
protected:
  string name;
  int health;

public:
  GameCharacter(string n = "Unknown", int h = 100) : name(n), health(h) {}
  virtual void display() {
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
  }
};

class Warrior : virtual public GameCharacter {

public:
  Warrior(string n, int h) : GameCharacter(n, h) {};
  void physicalAttack() {
    cout << "Atttacked!" << endl;
    health -= 20;
  }
};
class Mage : virtual public GameCharacter {
public:
  Mage(string n, int h) : GameCharacter(n, h) {};
  void castSpell() { cout << "Fired!" << endl; }
};

class BattleMage : public Warrior, public Mage {
public:
  BattleMage(string n, int h) : Warrior(n, h), Mage(n, h) {};
};

int main() {
    BattleMage bm("Thor", 100);
    bm.display();
    bm.physicalAttack();
    bm.castSpell();
    bm.physicalAttack();
    
    bm.display(); 
    return 0;
}