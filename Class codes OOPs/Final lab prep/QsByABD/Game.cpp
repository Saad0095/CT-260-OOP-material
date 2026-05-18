#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stdexcept>
#include <algorithm>
using namespace std;

class InventoryException:public exception{
	private:
		string e;
	public:
		InventoryException(string m):e(m){}
		const char* what() const noexcept{
			return e.c_str();
		}
};

class Character{
	protected:
		string name;
		int level;
	public:
		Character(string n, int l):name(n), level(l){}	
		virtual void attack()=0;
		string getName(){return name;}
		void display(){
			cout << "Name: " << name << endl;
			cout << "Level: " << level << endl;
		}
};

class Warrior:public virtual Character{
	public:
		Warrior(string n, int l):Character(n, l){}
		void attack(){cout << "warrior attacking!" << endl;}
};

class Mage:public virtual Character{
	public:
		Mage(string n, int l):Character(n, l){}
		void attack(){cout << "mage attacking!" << endl;}
};

class Mighty:public Warrior, public Mage{
	public:
		Mighty(string n, int l):Character(n, l), Warrior(n, l), Mage(n, l){}
		void attack() override {
			cout << "As a Mighty hybrid, I strike twice!" << endl;
			Warrior::attack(); 
			Mage::attack();    
		}
};


template <class T>
class Inventory{
	protected:
		vector<T> items;
	public:
		void addItem(T i){
			items.push_back(i);
			cout << i << " added to inventory\n\n";
		}
		void removeItem(T i){
			auto it = find(items.begin(), items.end(), i);
			if(it == items.end()){
				throw InventoryException("Item not found in inventory!");
			}
			items.erase(it);
			cout << i << " removed from inventory\n\n";
		}
		void show(){
			for(T i:items){
				cout << i << "\t";
			}
			cout << endl;
		}
};

class GameManager{
	protected:
		map<string, Character*> characters;
		set<string> types;
	public:
		void add(string type, Character* c){
			characters[c->getName()] = c;
			types.insert(type);
		}
		void showCharacter(){
			for (auto pair : characters) {
            pair.second->display();
            pair.second->attack();
        	}
		}
		void showTypes(){
			for(auto t:types){
				cout << t << endl;
			}
		}
};

int main(){
	GameManager gm;

    gm.add("Warrior", new Warrior("Thor", 10));
    gm.add("Mage", new Mage("Merlin", 12));
    gm.add("Mighty", new Mighty("Ares", 20));

    gm.showCharacter();
    gm.showTypes();
    
    Inventory<string> inv;

    try {
        inv.addItem("Sword");
        inv.addItem("Potion");
        inv.addItem("Shield");

        inv.show();

        inv.removeItem("Potion");

        inv.show();

        // Exception Test
        inv.removeItem("Bow");
    }

    catch (InventoryException& e) {
        cout << "Inventory Exception: "
             << e.what() << endl;
    }
	return 0;
}