//4_5 Product Class
#include <iostream>
using namespace std;

class Product{
	private:
		int id;
		double price;
	public:
		Product() : id(1),price(1.0){ }
		Product(int x, double y) : id(x), price(y) { }
		
		void setID(int x){
			id = x;
		}
		void setPrice(int y){
			price = y;
		}
		int getID() const{
			return id;
		}
		double getPrice() const{
			return price;
		}
};

int main(void){
	Product p1;
	Product p2(111,125.5);
	cout << "Product One ID is: " << p1.getID() << endl;
	cout << "Product One Price is: " <<p1.getPrice() << endl;
	cout << "Product Two ID is: " << p2.getID() << endl;
	cout << "Product Two Price is: " <<p2.getPrice() << endl;
}