// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }


































// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }

// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }

// PROGRAM 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Employee {
// 	private:
// 		char* EmployeeName = nullptr;
// 		const int EmployeeID;
// 		public:
// 			Employee() : EmployeeID(0) {
// 				EmployeeName = "Unknown";
// 			}
// 			Employee(char* name, int id) : EmployeeID(id) {
// 			EmployeeName = name;
// 			}
// 			void setName(char* name){
// 				name = new char[strlen(name)+1];
// 			}
// 			char* getName() {
// 				return EmployeeName;
// 			}
// 			int getID() {
// 				return EmployeeID;
// 			}
// };
// int main() {
// 	Employee Employee1("Abdullah Bin Waqar", 101);
// 	Employee Employee2("Noman Ahmed", 102);
// 	Employee Employee3("Kamran Hammad", 103);

// 	cout << "Employee 1: " << Employee1.getName() << ", ID: " << Employee1.getID() << endl;
// 	cout << "Employee 2: " << Employee2.getName() << ", ID: " << Employee2.getID() << endl;
// 	cout << "Employee 3: " << Employee3.getName() << ", ID: " << Employee3.getID() << endl;
	
// 	return 0;
// }

// PROGRAM 2
// #include <iostream>
// using namespace std;

// class DynamicArray {
//     private:
//         int* arr;
//         int SIZE;
//         int index;
//     public:
//         DynamicArray(int size){
//             SIZE = size;
//             arr = new int[SIZE];
//             index = 0;
//             for(int i=0; i<SIZE; i++){
//                 arr[i] = 0;
//             }
//         }
//         int size() const{
//             return SIZE;
//         }

//         void push(int n){
//             if(index < SIZE){
//                 arr[index] = n;
//                 index++;
//             }
//             else{
//                 cout << "ALL INDEXES ARE OCCUPIED";
//             }
//         }
//         void Display(){
//             for(int i=0; i<SIZE; i++){
//                 cout << arr[i] << " ";
//             }
//         }
        
// };

// int main(){
//     DynamicArray array1(5);
//     cout << array1.size() << endl;
//     array1.push(10);
//     array1.push(20);        
//     array1.push(30);
//     array1.push(40);
//     array1.push(50);
//     array1.Display();

//     return 0;
// }

// PROGRAM 3
// #include <iostream>
// using namespace std;

// class Account {
//     private:
//         int account_no;
//         double account_bal;
//         int security_code;
//         static int count;
//     public:
//         Account(int account_num, double acc_bal, int sec_code){
//             account_no = account_num;
//             account_bal = acc_bal;
//             security_code = sec_code;
//             count++;
//         }
//         void display() {
//             cout << "Account Number: " << account_no << endl;
//             cout << "Account Balance: " << account_bal << endl;
//             cout << "Security Code: " << security_code << endl;
//         }
//         static int getCount(){
//         	return count;
// 		}
// };
// int Account::count = 0;

// int main(){
//     Account acc1(123456, 1000.50, 7890);
//     acc1.display();

//     Account acc2(654321, 2500.75, 4321);
//     acc2.display();

//     cout << "Total number of accounts created: " << Account::getCount() << endl;

//     return 0;
// }

// PROGRAM 5
// #include <iostream>
// using namespace std;

// class HotelMercato{
//     private:
//         static const double rent_perDay;
//         string CustomerName;
//         int Days;
//         double Rent;
//     public:
//         HotelMercato(string name, int days){
//             CustomerName = name;
//             Days = days;
//             if(Days > 7){
//                 Rent = (Days - 1) * rent_perDay;
//             }
//             else{
//                 Rent = Days * rent_perDay;
//             }
//         }
//         void display() const{
//             cout << "Customer Name: " << CustomerName << endl;
//             cout << "Days Stayed: " << Days << endl;
//             cout << "Total Rent: " << Rent << endl;
//         }
// };
// const double HotelMercato::rent_perDay = 1000.85;

// int main(){
//     HotelMercato customer1("Ali Khan", 10);
//     customer1.display();

//     HotelMercato customer2("Sara Ahmed", 5);
//     customer2.display();

//     return 0;
// }