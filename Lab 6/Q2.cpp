#include<iostream>
using namespace std;

class Calculator{
	private:
		float num1;	
		float num2;	
		float num3;
		
	public:
		Calculator(float x=0, float y=0, float z=0): num1(x), num2(y), num3(z){};
		float addition(float a, float b){
			return a + b;
		}
		float addition(float a, float b, float c){
			return a + b + c;
		}
		float multiplication(float a, float b){
			return a * b;
		}
		float multiplication(float a, float b, float c){
			return a * b * c;
		}
		float subtraction(float a, float b){
			return a - b;
		}
		float subtraction(float a, float b, float c){
			return a - b - c;
		}
		float division(float a, float b){
			if(b==0){
				cout << "Not possible! " << endl;
			}
			else{
				return (a / b);
			}
		}
		float division(float a, float b, float c){
			if(b==0 || c == 0){
				cout << "Not possible! " << endl;
			}
			else{
				return (a / b)/c;
			}
		}
};

int main(){
		float n1,n2,n3;
		cout<< "Enter num1: "; 
		cin >> n1;
		cout<< "Enter num2: "; 
		cin >> n2;
		cout<< "Enter num3: "; 
		cin >> n3;
		Calculator c1(n1, n2, n3);
		
		cout << "Addition of 2 numbers : " << c1.addition(n1,n2) << endl;
		cout << "Addition of 3 numbers : " << c1.addition(n1,n2,n3) << endl;
		cout << "Multiplication of 2 numbers : " << c1.multiplication(n1,n2) << endl;
		cout << "Multiplication of 3 numbers : " << c1.multiplication(n1,n2,n3) << endl;
		cout << "Subtraction of 2 numbers : " << c1.subtraction(n1,n2) << endl;
		cout << "Subtraction of 3 numbers : " << c1.subtraction(n1,n2,n3) << endl;
		cout << "Division of 2 numbers : " << c1.division(n1,n2) << endl;
		cout << "Division of 3 numbers : " << c1.division(n1,n2,3) << endl;
		return 0;
}