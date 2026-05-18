// Question 1

//#include <iostream>
//using namespace std;
//
//class ArrayMultiplier{
//	public:
//		virtual void calculate()=0;
//};
//
//class ArrayMultiplier1D:public ArrayMultiplier{
//	private:
//		int s;
//		int* array1;
//		int* array2;
//	public:
//		ArrayMultiplier1D(int size):s(size){
//			array1 = new int[s];
//        	array2 = new int[s];
//			cout << "\tArray1\n";
//			for(int i=0; i<s; i++){
//				cout << "Array1[" << i << "]: ";
//				cin >> array1[i];
//			}
//			cout << "\n\tArray2\n";
//			for(int i=0; i<s; i++){
//				cout << "Array2[" << i << "]: ";
//				cin >> array2[i];
//			}
//		}
//		void calculate(){
//			cout << "1D Multiplication Result: ";
//			cout << "[  ";
//			for(int i=0; i<s; i++){
//				cout << array1[i]*array2[i] << "  ";
//			}
//			cout << "]" << endl;
//		}
//		
//};
//
//class ArrayMultiplier2D:public ArrayMultiplier{
//	private:
//		int r, c, cs;
//		int** array1;
//		int** array2;
//	public:
//		ArrayMultiplier2D(int row, int col, int cols){
//			r=row;
//			c=col;
//			cs=cols;
//			array1 = new int*[row];
//			for(int i=0; i<row; i++){array1[i] = new int[col];}
//			array2 = new int*[col];
//			for(int j=0; j<col; j++){array2[j] = new int[cols];}
//			
//			cout << "\n\tArray1\n";
//			for(int i=0; i<row; i++){
//				for(int j=0; j<col; j++){
//					cout << "Array1["<<i<<"]["<<j<<"]: ";
//					cin >> array1[i][j];
//				}
//			}
//			cout << "\n\tArray2\n";
//			for(int i=0; i<col; i++){
//				for(int j=0; j<cols; j++){
//					cout << "Array2["<<i<<"]["<<j<<"]: ";
//					cin >> array2[i][j];
//				}
//			}
//		}
//		void calculate(){
//			int sum;
//			for(int i=0; i<r; i++){
//				for(int j=0; j<cs; j++){
//					sum=0;
//					for(int k=0; k<c; k++){
//						sum += array1[i][k]*array2[k][j];
//					}
//					cout << sum << " ";
//				}
//				cout << endl;
//			}
//		}
//		~ArrayMultiplier2D() {
//	        for(int i = 0; i < r; i++){delete[] array1[i];}
//	        delete[] array1;
//	        for(int i = 0; i < c; i++){delete[] array2[i];}
//	        delete[] array2;
//    	}
//};
//
//int main(){
//	ArrayMultiplier* obj[2];
//	obj[0] = new ArrayMultiplier1D(3);
//	obj[0]->calculate();
//	obj[1] = new ArrayMultiplier2D(2,3,2);
//	obj[1]->calculate();
//	return 0;
//}




// Question 2

//#include <iostream>
//using namespace std;
//
//class store{
//	protected:
//		float total_bill;
//	public:
//		store(float a):total_bill(a){}
//		virtual void finalBill()=0;
//};
//
//
//class ImtiazStore:public store{
//	public:
//		ImtiazStore(float a):store(a){}
//		void finalBill(){
//			cout << "Final Bill: " << total_bill * 0.93 << endl;
//		}
//};
//
//class BinHashimStore:public store{
//	public:
//		BinHashimStore(float a):store(a){}
//		void finalBill(){
//			cout << "Final Bill: " << total_bill * 0.95 << endl;
//		}
//};
//int main(){
//	ImtiazStore i(100);
//	i.finalBill();
//	BinHashimStore b(100);
//	b.finalBill();
//	return 0;
//}

// Question 3

//#include <iostream>
//using namespace std;
//
//class Vehicle{
//	protected:
//		int carId;
//		string brand;
//		string model;
//	public:
//		Vehicle(int i, string b, string m):carId(i), brand(b), model(m){}
//		virtual bool isAvailable()=0;
//		virtual void rent()=0;
//		virtual void show(){
//			cout << "Car ID: " << carId << endl;
//			cout << "Brand: " << brand << endl;
//			cout << "Model: " << model << endl;
//		}
//		virtual void returnVehicle()=0;
//};
//
//class Car:public Vehicle{
//	protected:
//		bool available;
//	public:
//		Car(int i, string b, string m):Vehicle(i,b,m),available(true){}
//		bool isAvailable(){return available;}
//		void rent(){
//			if(available){
//				cout << "Car: " << brand << ":" << model << " rented!" << endl;
//				available = false;
//			}
//			else{cout << "Car Already Rented!" << endl;}
//		}
//		void show(){
//			Vehicle::show();
//			cout << "Available: " << (available? "Yes":"No") << endl;
//		}
//		void returnVehicle(){
//			available = true;
//			cout << "Car: " << brand << ":" << model << " returned!" << endl;
//		}
//};
//
//class RentalSystem{
//	public:
//		void rentVehicle(Vehicle* v){
//			v->rent();
//		}
//		void returnVehicle(Vehicle* v){
//			v->returnVehicle();
//		}
//};
//
//class Customer{
//	protected:
//		string name;
//	public:
//		Customer(string n):name(n){}
//		void rentVehicle(RentalSystem& r, Vehicle* v){
//			cout << "Customer Name: " << name << "\t";
//			r.rentVehicle(v);
//		}
//		void returnVehicle(RentalSystem& r, Vehicle* v){
//			cout << "Customer Name: " << name << "\t";
//			r.returnVehicle(v);
//		}
//};
//
//int main(){
//	Vehicle* vehicles[3];
//
//    vehicles[0] = new Car(101, "Toyota", "Corolla");
//    vehicles[1] = new Car(102, "Honda", "Civic");
//    vehicles[2] = new Car(103, "BMW", "X5");
//
//    RentalSystem UI;
//
//    Customer c1("Ali");
//    Customer c2("Ahmed");
//    
//    c1.rentVehicle(UI, vehicles[0]);
//    c1.rentVehicle(UI, vehicles[0]);
//    c2.rentVehicle(UI, vehicles[0]);
//    c1.returnVehicle(UI, vehicles[0]);
//    c2.rentVehicle(UI, vehicles[0]);
//    
//	return 0;
//}

// Question 4 & Question 5:

//#include <iostream>
//#include <string>
//using namespace std;
//
//class EncryptionTechnique{
//	protected:
//		string word;
//	public:
//		EncryptionTechnique(string w):word(w){}
//		virtual string Encrypt()=0;
//		string getWord(){
//			return word;
//		}
//		virtual ~EncryptionTechnique() {}
//};
//
//class EncryptionTecnique1:public EncryptionTechnique{
//	public:
//		EncryptionTecnique1(string w):EncryptionTechnique(w){}
//		string Encrypt(){
//			string enc = "";
//			for(int i=0; i<word.length(); i++){
//				enc += to_string((int)word[i]);
//			}
//			return enc;
//		}
//}; 
//
//class EncryptionTecnique2:public EncryptionTechnique{
//	public:
//		EncryptionTecnique2(string w):EncryptionTechnique(w){}
//		string Encrypt(){
//			string enc = "";
//			for(int i=0; i<word.length(); i++){
//				enc += to_string((int)word[i]+2);
//			}
//			return enc;
//		}
//}; 
//
//class DecryptionTechnique{
//	protected:
//		string encrypted;
//	public:
//		DecryptionTechnique(string e):encrypted(e){}
//		virtual string Decrypt() = 0;
//		string getEnc(){return encrypted;}
//		virtual ~DecryptionTechnique(){}
//};
//
//class DecryptionTechnique1: public DecryptionTechnique{
//	public:
//		DecryptionTechnique1(string e):DecryptionTechnique(e){}
//		string Decrypt(){
//			string decrypted = "";
//			for (int i = 0; i < encrypted.length(); i += 2) {
//	            string part = encrypted.substr(i, 2);
//	            int ascii = stoi(part);
//	
//	            decrypted += char(ascii);
//        }
//        return decrypted;
//	}
//};
//
//class DecryptionTechnique2: public DecryptionTechnique{
//	public:
//		DecryptionTechnique2(string e):DecryptionTechnique(e){}
//		string Decrypt(){
//			string decrypted = "";
//			for (int i = 0; i < encrypted.length(); i += 2) {
//	            string part = encrypted.substr(i, 2);
//	            int ascii = stoi(part);
//	
//	            decrypted += (char)(ascii-2);
//        }
//        return decrypted;
//	}
//};
//
//int main(){
//	EncryptionTechnique* tech[2];
//	tech[0] = new EncryptionTecnique1("HELLO");
//	tech[1] = new EncryptionTecnique2("HELLO");
//	cout << "\tEncryption Technique 1" << endl;
//	cout << tech[0]->getWord() << " Encrypted: " << tech[0]->Encrypt() << endl;
//	cout << "\tEncryption Technique 2" << endl;
//	cout << tech[1]->getWord() << " Encrypted: " << tech[1]->Encrypt() << endl;
//
//	DecryptionTechnique* tech1[2];
//	tech1[0] = new DecryptionTechnique1("7269767679");
//	tech1[1] = new DecryptionTechnique2("7471787881");
//	cout << "\tDecryption Technique 1" << endl;
//	cout << tech1[0]->getEnc() << " Decrypted: " << tech1[0]->Decrypt() << endl;
//	cout << "\tDecryption Technique 2" << endl;
//	cout << tech1[1]->getEnc() << " Decrypted: " << tech1[1]->Decrypt() << endl;
//	return 0;
//}

// Lab 10 Question 1

//#include <iostream>
//using namespace std;
//
//template <typename T, typename U>
//class calculator{
//	private:
//		T num1;
//		U num2;
//	public:
//		calculator(T m, U n):num1(m), num2(n){}
//		void add(){
//			cout << "Sum: " << num1+num2 << endl;
//		}
//		void sub(){
//			cout << "Difference: " << num1-num2 << endl;
//		}
//		void pro(){
//			cout << "Product: " << num1*num2 << endl;
//		}
//		void div(){
//			if(num2==0){cout << "Zero Division Error!" << endl;}
//			else{
//				cout << "Divison: " << num1/num2 << endl;
//			}
//		}
//};
//
//int main(){
//	calculator<double, int> cal(6.5, 2);
//	cal.add();
//	cal.sub();
//	cal.pro();
//	cal.div();
//}

//Lab 10 Question 2

//#include <iostream>
//using namespace std;
//
//template <typename T, typename U>
//void swap(T &num1, U &num2){
//	T temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
//
//int main(){
//	int a=5; double b=9.08;
//	cout << "Before Swap: a=" << a << ":b=" << b << endl;
//	swap(a, b);
//	cout << "After Swap: a=" << a << ":b=" << b << endl;
//	return 0;
//}

// Lab 10 Question 3

//#include <iostream>
//using namespace std;
//
//template <class T>
//class mycontainer{
//	protected:
//		T element;
//	public:
//		mycontainer(T e):element(e){}
//		void increase(){element+=1;}
//		T getElement(){return element;}
//};
//
//template <>
//class mycontainer<char>{
//	protected:
//		char element;
//	public:
//		mycontainer(char e):element(e){}
//		void upper(){
//			if((element>='a') && (element<='z')){
//				element += ('A' - 'a');
//			}
//		}
//		char getElement(){return element;}
//};
//
//int main(){
//	mycontainer<float> number(4.5);
//	number.increase();
//	cout << "Increased: " << number.getElement() << endl;
//	mycontainer<char> letter('j');
//	letter.upper();
//	cout << "Upper: " << letter.getElement() << endl;
//	return 0;
//}

// Lab 10 Question 4

//#include <iostream>
//using namespace std;
//
//template <class T>
//class array1D{
//	protected:
//		T* value;
//		int capacity;
//		int currentIndex;
//	public:
//		array1D(int c):capacity(c), currentIndex(0){
//			value = new T[capacity];
//		}
//		virtual bool isFull() = 0; 
//		virtual bool isEmpty() = 0;
//		virtual int size() = 0;
//		virtual T Front() = 0; 
//		virtual T Rear() = 0;
//		virtual void enqueue(T v) = 0;
//		virtual void dequeue() = 0;
//		virtual void resize() = 0;
//		virtual ~array1D(){
//			delete[] value;
//		}	
//};
//
//template <class T>
//class DynamicQueue:public array1D<T>{
//	protected:
//		int f;
//		int r;
//	public:
//		DynamicQueue(int c=5):array1D<T>(c){
//			f = 0;
//			r = -1;
//		}
//		bool isEmpty(){return this->currentIndex==0;}
//		bool isFull(){return this->capacity==this->currentIndex;}
//		int size(){return this->currentIndex;}
//		T Front(){
//			if(isEmpty()) throw "Queue is Empty";
//			else{return this->value[f];}
//		}
//		T Rear(){
//			if(isEmpty()) throw "Queue is Empty";
//			else{return this->value[r];}
//		}
//		void enqueue(T v){
//			if(isFull()){resize();}
//			r = (r+1)%this->capacity;
//			this->value[r] = v;
//			this->currentIndex++;
//		}
//		void dequeue(){
//			if(isEmpty()) throw "Queue is Empty";
//			f = (f+1)%this->capacity;
//			this->currentIndex--;
//		}
//		void resize(){
//			int old = this->capacity;
//			this->capacity *= 2;
//			T* newValue = new T[this->capacity];
//			
//			for(int i=0; i<this->currentIndex; i++){
//				newValue[i] = this->value[(f+i)%old];
//			}
//			
//			delete[] this->value;
//			this->value = newValue;
//			f = 0;
//			r = this->currentIndex - 1;
//			cout << "Executed" << endl;
//		}
//};
//
//int main(){
//	DynamicQueue<int> q(3);
//	q.enqueue(5);
//	q.enqueue(8);
//	q.enqueue(9);
//	q.enqueue(6);
//	cout << "Front: " << q.Front() << endl;
//	q.dequeue();
//	cout << "Front After Dequeue: " << q.Front() << endl;
//	q.enqueue(10);
//	q.enqueue(11);
//	return 0;
//}

// Lab 10 Question 5

//#include <iostream>
//#include <queue>
//using namespace std;
//
//class JobQueue{
//	private:
//		queue<string> PrintJobs;
//	public:
//		void enqueue(string j){
//			PrintJobs.push(j);
//			cout << "Added!" << endl;
//		}
//		void dequeue(){
//			if(PrintJobs.empty()){
//				cout << "Printer is idle, no job to do!" << endl;
//				return;
//			}
//			cout << "Currently Handling: " << PrintJobs.front() << endl;
//			PrintJobs.pop();
//		}
//};
//
//int main(){
//	JobQueue work;
//	work.dequeue();
//	work.enqueue("Lab_10.pdf");
//	work.enqueue("Lab_11.pdf");
//	work.enqueue("Lab_12.pdf");
//	work.dequeue();
//	work.dequeue();
//	work.dequeue();
//	work.dequeue();
//	return 0;
//}


// Lab 11 Question 1

//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//class login{
//	private:
//		string u;
//		string p;
//	public:
//		login(string a, string b):u(a), p(b){}
//		void check(){
//			bool digit = false;
//			if(p.length()<6) throw "Password Length should be atleast 6 Characters long!";
//			for(int i=0; i<p.length(); i++){
//				if(isdigit(p[i])){
//					digit = true; 
//					break;
//				} 
//			}
//			if(!digit){throw "Password should contain atleast one digit";
//			}
////			if(!any_of(p.begin(), p.end(), ::isdigit)) throw "Password shoudl contain digit!";
//		}
//};
//
//int main(){
//	login user("abdullah", "hahahaha");
//	try{
//		user.check();
//	}
//	catch(const char* e){
//		cout << e << endl;
//	}
//	return 0;
//}

// Lab 11 Question 2

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Dstack{
//	private:
//		vector<string> s;
//	public:
//		void push(string n){
//			s.push_back(n);
//		}void pop(){
//			s.pop_back();
//		}string peek(){
//			return s.front();
//		}void reverses(){
//			for(string& c:s){
//				reverse(c.begin(), c.end());
//			}
//		}
//		void display(){
//			for(string& d:s){
//				cout << d << endl;
//			}
//		}
//};
//
//int main(){
//	Dstack stack;
//	stack.push("Hello");
//	stack.push("World");
//	stack.push("New");
//	stack.display();
//	stack.pop();
//	stack.display();
//	stack.push("New");
//	stack.reverses();
//	stack.display();
//}

// Lab 11 Question 3
//
//#include <iostream>
//#include <vector>
//#include <random>
//#include <algorithm>
//#include <chrono>
//using namespace std;
//using namespace std::chrono;
//
//
//		void cusSort(vector<int>& s){
//			int size = s.size();
//			for(int i=0; i<size-1; i++){
//				for(int j=0; j<size-1-i; j++){
//					if(s[j]>s[j+1]){
//						swap(s[j], s[j+1]);
//					}
//				}
//			}
//		}
//
//
//int main(){
//	vector<int> store;
//	for(int i = 0; i < 1000; i++) {
//    	store.push_back(rand() % 1000);
//	}
//	vector<int> store1 = store;
//	auto start = high_resolution_clock::now();
//    cusSort(store);
//    auto stop = high_resolution_clock::now();
//    auto duration = duration_cast<microseconds>(stop - start);
//	
//	cout << "Time for Custom Sort: " << duration.count() << endl;
//	
//	
//	
//	auto start1 = high_resolution_clock::now();
//    sort(store1.begin(), store1.end());
//    auto stop1 = high_resolution_clock::now();
//    auto duration1 = duration_cast<microseconds>(stop1 - start1);
//    cout << "Time for Pre-defined Sort: " << duration1.count() << endl;
//	
//	return 0;
//}


// Lab 11 Question 4

//#include <iostream>
//#include <map>
//using namespace std;
//
//class MapStore{
//	private:
//		map<string, int> marks;
//	public:
//		void in(string s, int m){
//			marks[s] = m;
//		}int getMarks(string& s){
//			if(!marks.count(s)){
//				cout << "This key does not exist!" << endl;
//			}else{
//				return marks.at(s);
//			}
//		}void update(const string& s, int m){
//			if(!marks.count(s)){
//				cout << "This key does not exist!" << endl;
//			}else{
//				marks[s] = m;
//			}
//		}void Delete(const string& s){
//			if(!marks.count(s)){
//				cout << "This key does not exist!" << endl;
//			}else{
//				marks.erase(s);
//			}
//		}void display(){
//			for(auto [n, m]:marks){
//				cout << "Name: " << n << "\tMarks: " << m << endl;
//			}
//		}
//};
//
//int main(){
//	MapStore inventory;
//	inventory.in("Abdullah Bin Waqar", 98);
//	inventory.in("Saad Bin Khalid", 99);
//	inventory.in("Hassaan Ahmed Khan", 98);
//	inventory.in("Noman", 85);
//	inventory.display();
//	inventory.Delete("Noman");
//	inventory.display();
//	
//	return 0;
//}

// Lab 11 Question 4

//#include <iostream>
//#include <set>
//using namespace std;
//
//class guest{
//	private:
//		set<string> list;
//	public:
//		void add(string n){
//			list.insert(n);
//		}void display(){
//			for(auto n:list){
//				cout << "Guest: " << n << endl;
//			}
//		}void Count(){
//			cout << "Total Guests: " << list.size();
//		}
//};
//
//
//int main(){
//	guest invited;
//	invited.add("Abdullah Bin Waqar");
//	invited.add("Abdullah Bin Waqar");
//	invited.add("Saad Bin Khalid");
//	invited.add("Saad Bin Khalid");
//	invited.display();
//	invited.Count();
//}

// Lab 12 Question 1

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main(){
//	string input;
//	string file = "data.txt";
//	
//	cout << "Enter String: ";
//	getline(cin, input);
//	
//	int len = input.length();
//	cout << "The length of the string entered: " << len << endl;
//	
//	ofstream outFile(file, ios::app);
//	if(outFile.is_open()){
//		outFile << input;
//		outFile.close();
//		cout << "Write function performed!" << endl;
//	}else{
//		cout << "Error!" << endl;
//	}
//	
//	cout << "Reading from file" << endl;
//	ifstream inFile(file);
//	if(inFile.is_open()){
//		char ch;
//		while(inFile.get(ch)){
//			cout << ch;
//		}
//		inFile.close();
//	}else{
//		cout << "Error!" << endl;
//	}
//	return 0;
//}

// Lab 12 Question 2

//#include <iostream>
//#include <fstream>
//#include <sstream>
//using namespace std;
//
//int main(){
//	string copy;
//	string file = "data.txt";
//	string copyFile = "copy.txt";
//	
//	
//	ifstream inFile(file);
//	if(inFile.is_open()){
//		stringstream buffer;
//		buffer << inFile.rdbuf();
//		copy = buffer.str();
//		cout << "String read!: " << copy << endl;
//		inFile.close();
//	}else{
//		cout << "Error!" << endl; 
//	}
//	cout << "\n\tCopying!" << endl;
//	
//	ofstream outFile(copyFile);
//	if(outFile.is_open()){
//		outFile << copy;
//		outFile.close();
//	}else{
//		cout << "Error!" << endl;
//	}
//	cout << "\n\tReading The Copied File" << endl;
//	ifstream iinFile(copyFile);
//		if(iinFile.is_open()){
//			char ch;
//			while(iinFile.get(ch)){
//				cout << ch;
//			}
//		}else{
//			cout << "Error!" << endl;
//		}
//	
//	return 0;
//}


// Lab 12 Question 3

//#include <iostream>
//#include <fstream>
//#include <sstream>
//using namespace std;
//
//class person{
//	private:
//		char name[50];
//		int age;
//	public:
//		person(string n, int a):age(a){
//			strncpy(this->name, n.c_str(), 49);
//			this->name[49] = '\0';
//		}
//		person():name(""),age(0){}
//		void display(){
//			cout << "Name: " << name << endl;
//			cout << "Age: " << age << endl;
//		}		
//};
//
//int main(){
//	person person1("Abdullah Bin Waqar", 20);
//	
//	ofstream outFile("person.bin", ios::binary);
//	if(outFile.is_open()){
//		outFile.write(reinterpret_cast<char*>(&person1), sizeof(person));
//        outFile.close();
//        cout << "Object written to person.bin successfully." << endl;
//	}else{
//		cout << "Error!" << endl;
//	}
//	
//	ifstream inFile("person.bin", ios::binary);
//	if(inFile.is_open()){
//		person person2;
//		inFile.read(reinterpret_cast<char*>(&person2), sizeof(person));
//        inFile.close();
//        
//        cout << "Object read from file:" << endl;
//        person2.display();
//        inFile.close();
//	}else{
//		cout << "Error!" << endl;
//	}
//	return 0;
//}

// Lab 12 Question 4

//#include <iostream>
//#include <fstream>
//#include <sstream>
//using namespace std;
//
//class participant{
//	private:
//		int ID;
//		string name;
//		int score;
//	public:
//		participant(int i, string n, int s):ID(i), name(n), score(s){}
//		void input(){
//			ofstream outFile("participant.dat", ios::app);
//			if(outFile.is_open()){
//				outFile << ID << endl;
//				outFile << name << endl;
//				outFile << score << endl;
//				
//				outFile.close();
//				cout << "Record stored successfully!" << endl;
//			}else{
//				cout << "Error!" << endl;
//			}
//		}
//		
//		void output(int i){
//			ifstream inFile("participant.dat", ios::app);
//			
//			if(inFile.is_open()){
//				bool found = false;
//				
//				while(inFile>>ID){
//					inFile.ignore();
//					getline(inFile, name);
//					inFile >> score;
//					
//					if (ID == i) {
//		                cout << "\nParticipant Found\n";
//		                cout << "ID: " << ID << endl;
//		                cout << "Name: " << name << endl;
//		                cout << "Score: " << score << endl;
//		
//		                found = true;
//		                break;
//            		}
//				}
//            		if(!found){cout << "ID not found!" << endl;}
//			}
//			inFile.close();
//		}
//		void highest(){
//			ifstream inFile("participant.dat", ios::app);
//			if(inFile.is_open()){
//				int max = -1;
//				string n;
//				int i;
//				int s;
//				
//				while(inFile >> ID){
//					inFile.ignore();
//					getline(inFile, name);
//					inFile >> score;
//					
//					if(score>max){
//						n = name;
//						i = ID;
//						max = score;
//					}
//				}
//				cout << "\n\tTOP SCORER\n\n";
//				cout << "ID: " << i << endl;
//				cout << "Name: " << n << endl;
//				cout << "Score: " << max << endl;
//				
//				
//				inFile.close();
//			}else{
//				cout << "Error!" << endl;
//			}
//		}
//};
//
//int main(){
//	participant p(101,"Abdullah Bin Waqar", 20);
//	participant q(104,"Saad Bin Khalid", 19);
//	participant r(103,"Hassaan Ahmed Khan", 25);
//	participant s(102,"Hassan", 22);
//	p.input();
//	q.input();
//	r.input();
//	s.input();
//	p.output(101);
//	q.output(104);
//	r.output(103);
//	s.output(102);
//	p.highest();
//	
//	
//	return 0;
//}


// Lab 12 Question 5

//#include <iostream>
//#include <fstream>
//#include <sstream>
//using namespace std;
//
//void count(){
//	ifstream inFile("check.txt");
//	
//	if(inFile.is_open()){
//		string line;
//		int c=0;
//		
//		cout << "\tREADING\n\n" << endl;
//		while(getline(inFile, line)){
//			if(line[0]!='A' && line[0]!='a'){c++;}
//			}
//			inFile.close();
//			cout << "# of lines starting without A/a: " << c << endl;
//		}else{
//			cout << "Error!" << endl;
//		}
//	}
//
//
//int main(){
//	count();
//	return 0;
//}

// CIP Assignment

//#include <iostream>
//#include <map>
//#include <stdexcept>
//using namespace std;
//
//class InsufficientStockException : public exception {
//public:
//    const char* what() const noexcept override {
//        return "Insufficient stock available!";
//    }
//};
//
//class sim{
//	private:
//		map<int, int> stock;
//	public:
//		input(int i, int q){
//			stock[i] = q;
//		}
//		void updateStock(int i, int count){
//			if(stock.count(i)){
//				if(stock.at(i)-count >= 0){
//					stock.at(i) -= count;
//					cout << "Stock updated sucessfully!" << endl;
//				}else{
//					throw InsufficientStockException();
//				}
//			}else{
//				throw invalid_argument("Product ID does not exist!");
//			}
//		}
//		void display(int i){
//			if(stock.count(i)){
//				cout << "Stock Quantity: " << stock.at(i) << endl;
//			}
//		}
//		
//};
//
//int main(){
//	sim inventory;
//	inventory.input(12, 90);
//	
//	try{
////		inventory.updateStock(12, 100);
////		inventory.updateStock(13, 80);
//		inventory.updateStock(12, 80);
//		inventory.display(12);
//		
//	}
//	catch (const InsufficientStockException& e) {
//        cout << "Custom Exception: " << e.what() << endl;
//    }
//    catch (const invalid_argument& e) {
//        cout << "Invalid Argument Exception: " << e.what() << endl;
//    }
//	return 0;
//}

// CIP ASSIGNMENT

//#include <iostream>
//#include <vector>
//#include <set>
//#include <chrono>
//#include <algorithm>
//using namespace std;
//using namespace std::chrono;
//
//bool isAlphaNum(string n){
//	for(char ch: n){
//		if(!isalnum(ch)){
//			return false;
//		}
//	}
//	return true;
//}
//
//
//int main(){
//	int s;
//	vector<string> transaction;
//	set<string> noDuplicate;
//	
//	cout << "Enter # of strings: ";
//	cin >> s;
//	
//	for(int i=0; i<s; i++){
//		string n;
//		cout << "String: ";
//		cin >> n;
//		if(!isAlphaNum(n)) throw invalid_argument("Transaction contains non-alphanumeric characters!");
//		else{
//			transaction.push_back(n);
//			noDuplicate.insert(n);
//		}
//	}
//	
//	std::sort(transaction.begin(), transaction.end());
//	
//	string id;
//	
//	cout << "\nEnter transaction to search: ";
//	cin >> id;
//	
//	auto start1 = high_resolution_clock::now();
//
//        bool foundVector = binary_search(
//            transaction.begin(),
//            transaction.end(),
//            id
//        );
//    
//    auto end1 = high_resolution_clock::now();
//	auto vectorTime = duration_cast<nanoseconds>(end1 - start1);
//	
//	auto start2 = high_resolution_clock::now();
//
//    bool foundSet = noDuplicate.find(id) != noDuplicate.end();
//    auto end2 = high_resolution_clock::now();
//    auto setTime = duration_cast<nanoseconds>(end2 - start2);
//    
//    cout << "\nTime taken by vector: " << vectorTime.count() << " ns";
//    cout << "\nTime taken by set: " << setTime.count() << " ns";
//    
//	return 0;
//}
