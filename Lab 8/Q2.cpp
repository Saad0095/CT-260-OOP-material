#include <iostream>
using namespace std;

class Character {
protected:
  string name;
  int level;
  int health;

public:
  Character(string n, int l, int h) : name(n), level(l), health(h) {}

  virtual void display() {
    cout << "Name: " << name << endl;
    cout << "Level: " << level << endl;
    cout << "Health: " << health << endl;
  }
};

class Warrior : virtual public Character {
protected:
  int strength;

public:
  Warrior(string n, int l, int h, int s) : Character(n, l, h), strength(s) {}

  void slash() { cout << name << " fired Slash Attack!" << endl; }
};

class Mage : virtual public Character {
protected:
  int intelligence;

public:
  Mage(string n, int l, int h, int i) : Character(n, l, h), intelligence(i) {}

  void fireball() { cout << name << " fired Fireball Spell!" << endl; }
};

class Archer : public Character {
  int dexterity;

public:
  Archer(string n, int l, int h, int d) : Character(n, l, h), dexterity(d) {}

  void rapidShot() { cout << name << " fired Rapid Shot!" << endl; }
};

class NPC : public Character {
public:
  NPC(string n, int l, int h) : Character(n, l, h) {}

  void dialogue() { cout << name << " said welcome!" << endl; }
};

class Mighty : public Warrior, public Mage {
public:
  Mighty(string n, int l, int h, int s, int i)
      : Character(n, l, h), Warrior(n, l, h, s), Mage(n, l, h, i) {}

  void display() {
    cout << "\nMighty Character Details" << endl;
    Character::display();
    cout << "Strength: " << strength << endl;
    cout << "Intelligence: " << intelligence << endl;
  }
};

int main() {
  cout << "---Game Character System---" << endl;

  Mighty m("Thor", 10, 100, 90, 80);
  Archer a("Legolas", 8, 85, 95);
  NPC n("Guard", 3, 50);

  cout << "Mighty Character: " << endl;
  m.display();

  cout << "\nSpecial Abilities: " << endl;
  m.slash();
  m.fireball();

  cout << "\nArcher Character: " << endl;
  a.display();
  a.rapidShot();

  cout << "\nNPC Character: " << endl;
  n.display();
  n.dialogue();

  cout << "\nAll Characters Ready!" << endl;

  return 0;
}