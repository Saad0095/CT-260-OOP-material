#include <iostream>
#include <set>
using namespace std;

class ShapeException {
private:
  string message;

public:
  ShapeException(string msg) { message = msg; }

  string what() { return message; }
};

class Shape {
public:
  virtual double area() = 0;

  virtual ~Shape() {}
};

class Rectangle : virtual public Shape {
protected:
  double length, width;

public:
  Rectangle(double l, double w) {

    if (l < 0 || w < 0) {
      throw ShapeException("Negative dimensions are not allowed.");
    }

    length = l;
    width = w;
  }

  double area() override { return length * width; }
};

class ColoredShape : virtual public Shape {
protected:
  string color;

public:
  ColoredShape(string c) { color = c; }

  string getColor() { return color; }
};

class ColoredRectangle : public Rectangle, public ColoredShape {
public:
  ColoredRectangle(double l, double w, string c)
      : Rectangle(l, w), ColoredShape(c) {}
};

int main() {
  set<string> uniqueColors;
  try {
    ColoredRectangle r1(5, 4, "Red");
    ColoredRectangle r2(3, 2, "Blue");
    ColoredRectangle r3(6, 7, "Red");

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    uniqueColors.insert(r1.getColor());
    uniqueColors.insert(r2.getColor());
    uniqueColors.insert(r3.getColor());

    cout << "\nUnique Colors:\n";

    for (string c : uniqueColors) {
      cout << c << endl;
    }
    ColoredRectangle r4(-5, 3, "Green");
  }

  catch (ShapeException &e) {
    cout << "\nException Caught: " << e.what() << endl;
  }

  return 0;
}