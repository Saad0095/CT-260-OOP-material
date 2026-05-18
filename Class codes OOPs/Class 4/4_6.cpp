//4_6 Product Class with Static Attribute and Method
#include <iostream>
using namespace std;

class Product{
	private:
		int id;
		double price;
		static int count; //static attribute declared
	public:
		Product() : id(1),price(1.0){
			count = count+1;
		}
		Product(int x, double y) : id(x), price(y){
			count = count + 1;
		}
		~Product(){
			count = count - 1;
		}	
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
		//static method
		static double getCount(){
			return count;
		}
};

int Product::count=0; //static attribute initilized

int main(void){
	{
		cout << "Total products are: " << Product::getCount() << endl;
		Product p1;
		Product p2(111,125.5);
		cout << "Product One ID is: " << p1.getID() << endl;
		cout << "Product One Price is: " <<p1.getPrice() << endl;
		cout << "Product Two ID is: " << p2.getID() << endl;
		cout << "Product Two Price is: " <<p2.getPrice() << endl;
		cout << "Total products are: " << p1.getCount() << endl;
	}
	cout << "Total products are: " << Product::getCount() << endl;
}