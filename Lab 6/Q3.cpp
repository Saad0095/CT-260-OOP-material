#include <iostream>
#include <math.h>
using namespace std;

class Vector {
private:
  float x;
  float y;

public:
  Vector(float xComp = 0, float yComp = 0) : x(xComp), y(yComp) {};
  Vector operator+(const Vector &obj) const {
    Vector temp;
    temp.x = x + obj.x;
    temp.y = y + obj.y;
    return temp;
  }
  Vector operator-(const Vector &v){
    return Vector(x + v.x, y + v.y);
  }
  Vector operator*(int scalar){
    return Vector(x * scalar, y * scalar);
  }
  Vector operator/(int scalar){
    return Vector(x / scalar, y / scalar);
  }
  float magnitude(){
    return sqrt(x*x + y*y);
  }
  void display(){
    cout << x << " + " << y << "i" << endl;
  }
};

int main() { 
    Vector v1(5,3), v2(3, 4);
    Vector v3, v4, v5, v6;

    cout << "v1 = ";
    v1.display();
    cout << "v2 = ";
    v2.display();

    v3 = v1 + v2;
    cout << "v1 + v2 = ";
    v3.display();

    v4 = v1 - v2;
    cout << "v1 - v2 = ";
    v4.display();

    v5 = v1 * 5;
    cout << "v1 * 5 = ";
    v5.display();

    v6 = v1 / 5;
    cout << "v1 / 5 = ";
    v6.display();

    cout << "Magnitude for vector v1 is " << v1.magnitude();
    return 0; 
}