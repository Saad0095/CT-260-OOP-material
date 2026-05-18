#include <iostream>
using namespace std;

float surfaceArea(float r) {
  int area = 4 * 3.1416 * r * r;
  return area;
}

float volume(float r) {
  int volume = (4.0 / 3.0) * 3.1416 * r * r * r;
  return volume;
}

int main() {
  float radius;

  cout << "Enter radius of the sphere: ";
  cin >> radius;

  cout << "Surface Area of Sphere: " << surfaceArea(radius) << endl;
  cout << "Volume of Sphere: " << volume(radius) << endl;

  return 0;
}
