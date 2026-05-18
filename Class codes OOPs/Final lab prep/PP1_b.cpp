#include <bits/stdc++.h>
using namespace std;

class InventoryException {
private:
  string msg;

public:
  InventoryException(string m) : msg(m) {};
  string what() { return msg; }
};

class Character {
private:
  string name;
  float level;

public:
  Character(string n, int l) : name(n), level(l) {}
  virtual void attack() = 0;
  string getName() { return name; };
  virtual ~Character() {}
};

class Warrior : virtual public Character {
private:
public:
  Warrior(string n, int l) : Character(n, l) {}
  void attack() override { cout << "Warrior attacking!" << endl; }
};

class Mage : virtual public Character {
private:
public:
  Mage(string n, int l) : Character(n, l) {}
  void attack() override { cout << "Mage attacking!" << endl; }
};

class Mighty : public Warrior, public Mage {
private:
public:
  Mighty(string n, int l) : Mage(n, l), Warrior(n, l), Character(n, l) {}
  void attack() override { cout << "Mighty attacking!" << endl; }
};

template <typename T> class Inventory {
private:
  vector<T> items;

public:
  void addItem(T it) { items.push_back(it); }
  void removeItem(T it) {
    auto i = find(items.begin(), items.end(), it);
    if (i == items.end()) {
      throw InventoryException("Iterm not found!");
    }
    items.erase(i);
  }
  void show() {
    for (T i : items) {
      cout << i << "\t";
    }
    cout << endl;
  }
};

class GameManager {
private:
  map<string, Character *> characters;
  set<string> types;

public:
  void addCharacter(Character *c, string type) {
    characters[c->getName()] = c;
    types.insert(type);
  }
  void showCharacters() {
    for (auto &c : characters) {
      cout << c.first << endl;
      c.second->attack();
    }
  }
  void showTypes() {
    for (auto &t : types) {
      cout << t << endl;
    }
  }
  ~GameManager() {
    for (auto &c : characters) {
      delete c.second;
    }
  }
};

int main() {
  GameManager gm;
  gm.addCharacter(new Warrior("Wrr", 10), "Warrior");
  gm.addCharacter(new Mighty("Migh", 10), "Mighty");
  gm.addCharacter(new Mage("Mag", 10), "Mage");

  gm.showCharacters();
  gm.showTypes();

  Inventory<string> inv;
  try {
    inv.addItem("Sword");
    inv.addItem("Potion");
    inv.addItem("Shield");

    inv.show();

    inv.removeItem("Potion");
    inv.removeItem("Bow");

  } catch (InventoryException &e) {
    cout << e.what() << endl;
  }
  return 0;
}