// Secure Inventory Manager Develop a system using std::map<int, int> where the
// key is a productIdand the value is stockQuantity.Implement a function
// updateStock(int id, int count) that decreases the stock.Throw a custom
// exception InsufficientStockException if the withdrawal amount
// exceedsavailable stock.Throw a std::invalid_argument exception if the
// productId does not exist in the map
#include <iostream>
using namespace std;
#include <map>

class InsufficientStockException {
public:
  const char *what() const { return "Insufficient stock!"; }
};

class InventoryManagment {
private:
  map<int, int> products;

public:
  void addProduct(int id, int quantity) { products[id] = quantity; }
  void updateStock(int id, int count) {
    if (count > products[id]) {
      throw InsufficientStockException();
    }
    if (products.find(id) == products.end()) {
      throw invalid_argument("Product not found!");
    }
    products[id] -= count;
    cout << "Stock of Product id "<< id <<" is updated successfully!" << endl;
    cout << "New Stock: " << products[id] << endl;
  }
};

int main() {
  InventoryManagment im;
  im.addProduct(101, 10);
  im.addProduct(102, 4);
  try {
    im.updateStock(101, 4);
    im.updateStock(102, 5);
  } catch (InsufficientStockException e) {
    cout << e.what() << endl;
  } catch (invalid_argument e) {
    cout << e.what() << endl;
  }

  return 0;
}