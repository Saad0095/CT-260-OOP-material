#include <iostream>
using namespace std;

class Database {
private:
    static Database* instance;
public:
    static Database* getInstance() {
        if (instance == NULL) {
            instance = new Database();
        }
        return instance;
    }

    void display() {
        cout << "Database Running..." << endl;
    }
};

Database* Database::instance = NULL;

int main() {
    Database* d1 = Database::getInstance();
    d1->display();

    Database* d2 = Database::getInstance();
    d2->display();

    if (d1 == d2) {
        cout << "Both variables point to the same instance" << endl;
    }

    return 0;
}