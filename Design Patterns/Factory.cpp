#include <iostream>
using namespace std;

class Food {
protected:
    string ingredients;

public:
    virtual void make() = 0;

    void displayIngredients() {
        cout << "Ingredients: " << ingredients << endl;
    }
};

class Burger : public Food {
public:
    Burger() {
        ingredients = "Bun, Patty, Lettuce";
    }

    void make() {
        cout << "Preparing Burger..." << endl;
    }
};

class Pizza : public Food {
public:
    Pizza() {
        ingredients = "Dough, Cheese, Sauce";
    }

    void make() {
        cout << "Preparing Pizza..." << endl;
    }
};

class FoodFactory {
public:
    Food* getFood(string type) {
        if (type == "burger")
            return new Burger();
        else if (type == "pizza")
            return new Pizza();
        else
            return NULL;
    }
};

int main() {
    FoodFactory factory;

    Food* f1 = factory.getFood("burger");
    f1->make();
    f1->displayIngredients();

    Food* f2 = factory.getFood("pizza");
    f2->make(); 
    f2->displayIngredients();

    return 0;
}