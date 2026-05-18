#include <iostream>
using namespace std;

class Item {
protected:
    string name;
    int quantity;

public:
    Item() : name(""), quantity(0) {}
    Item(string n, int q) : name(n), quantity(q) {}

    void setItem(string n, int q) {
        name = n;
        quantity = q;
    }

    string getName() { return name; }
    int getQuantity() { return quantity; }
    virtual float calculateBill() = 0;
};

class BakedGoods : public Item {
protected:
    float discount = 0.10;
public:
    BakedGoods() : Item() {}
    BakedGoods(string n, int q) : Item(n, q) {}
};

class Cakes : public BakedGoods {
private:
    float price = 600;
public:
    Cakes() : BakedGoods() {}
    Cakes(string n, int q) : BakedGoods(n, q) {}

    float calculateBill() {
        float total = quantity * price;
        return total - (total * discount);
    }
    void display() {
        cout << name << " " << price << " " << quantity << " "
             << (discount * 100) << "% " << calculateBill() << endl;
    }
};

class Bread : public BakedGoods {
private:
    float price = 200;
public:
    Bread() : BakedGoods() {}
    Bread(string n, int q) : BakedGoods(n, q) {}

    float calculateBill() {
        float total = quantity * price;
        return total - (total * discount);
    }
    void display() {
        cout << name << " " << price << " " << quantity << " "
             << (discount * 100) << "% " << calculateBill() << endl;
    }
};

class Drinks : public Item {
private:
    float discount = 0.05;
    float price = 100;
public:
    Drinks() : Item() {}
    Drinks(string n, int q) : Item(n, q) {}
    float calculateBill() {
        float total = quantity * price;
        return total - (total * discount);
    }
    void display() {
        cout << name << " " << price << " " << quantity << " "
             << (discount * 100) << "% " << calculateBill() << endl;
    }
};

int main() {
    Cakes cake;
    Bread bread;
    Drinks drink;
    int qty;
    cout << "Enter quantity of Cakes: ";
    cin >> qty;
    cake.setItem("Cake", qty);

    cout << "Enter quantity of Bread: ";
    cin >> qty;
    bread.setItem("Bread", qty);

    cout << "Enter quantity of Drinks: ";
    cin >> qty;
    drink.setItem("Drink", qty);

    cake.display();
    bread.display();
    drink.display();

    float grandTotal =
        cake.calculateBill() + bread.calculateBill() + drink.calculateBill();

    cout << "\n========================\n";
    cout << "Grand Total: " << grandTotal << endl;
    return 0;
}