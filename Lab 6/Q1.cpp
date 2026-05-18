#include <iostream>
using namespace std;

class Shape {
protected:
  int numberOfSides;
  float area;

public:
  Shape(int n = 0, float a = 0) : numberOfSides(n), area(a) {};
  int getNumberOfSides() { return numberOfSides; }
  float getArea() { return area; }
  void setNumberOfSides(int n) { numberOfSides = n; }
  void setArea(float a) { area = a; }
};

class Rectangle : public Shape {
protected:
  float length;
  float width;

public:
  Rectangle(float l, float w) : length(l), width(w), Shape(4, 0) {};
  void generateArea() { area = length * width; }
};

class Square : public Rectangle {
public:
  Square(float s) : Rectangle(s, s) {};
  void checkSides() {
    if (length == width)
      cout << "Square: All sides are equal" << endl;
    else
      cout << "Square: Sides are NOT equal" << endl;
  }

  void generateArea() { area = length * width; }
};

class Circle : public Shape {
private:
  float radius;

public:
  Circle(float r) : radius(r), Shape(0, 0) {};
  void generateArea() { area = 3.14 * (radius * radius); }
};

class Triangle : public Shape {
private:
  float height;
  float base;

public:
  Triangle(float h, float b) : height(h), base(b), Shape(3, 0) {};
  void generateArea() { area = (height * base) / 2; }
};

int main() {
  Rectangle r(5, 4);
  r.generateArea();
  cout << "Rectangle Area: " << r.getArea() << endl;

  Square s(5);
  s.checkSides();
  s.generateArea();
  cout << "Square Area: " << s.getArea() << endl;

  Circle c(4);
  c.generateArea();
  cout << "Circle Area: " << c.getArea() << endl;

  Triangle t(6, 3);
  t.generateArea();
  cout << "Triangle Area: " << t.getArea() << endl;

  return 0;
}