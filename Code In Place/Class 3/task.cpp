#include <iostream>
using namespace std;

class Car {
private:
    string model;
    float price;
    int numOfFeatures;
    string* features;

public:
    Car() {
        model = "Corolla";
        price = 400000;
        numOfFeatures = 1;
        features = new string[numOfFeatures];
        features[0] = "Smart Lock";
    }

    Car(string m, float p, int num, string f[]) {
        model = m;
        price = p;
        numOfFeatures = num;
        features = new string[numOfFeatures];
        for (int i = 0; i < numOfFeatures; i++) {
            features[i] = f[i];
        }
    }

    Car(const Car& obj) {
        model = obj.model;
        price = obj.price;
        numOfFeatures = obj.numOfFeatures;

        features = new string[numOfFeatures];
        for (int i = 0; i < numOfFeatures; i++) {
            features[i] = obj.features[i];
        }
    }

    void addFeature(string newFeature) {
        string* temp = new string[numOfFeatures + 1];

        for (int i = 0; i < numOfFeatures; i++) {
            temp[i] = features[i];
        }

        temp[numOfFeatures] = newFeature;
        numOfFeatures++;

        delete[] features;
        features = temp;
    }

    void display() const {
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << "Features: ";
        for (int i = 0; i < numOfFeatures; i++) {
            cout << features[i] << ", ";
        }
        cout << endl;
    }

    ~Car() {
        delete[] features;
    }
};

int main() {
    string features[] = {"ABS", "Airbags"};

    Car c1("Honda Civic", 900000, 2, features);
    c1.addFeature("GPS");

    Car c2 = c1; 

    cout << "Car 1 Details:\n";
    c1.display();

    cout << "\nCar 2 Details:\n";
    c2.display();

    return 0;
}
