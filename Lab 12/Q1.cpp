#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  string file = "data.txt";
  cout << "Enter a string: ";
  getline(cin, str);
  cout << "Length: " << str.length() << endl;
  ofstream fout(file, ios::app);
  if (fout.is_open()) {
    fout << str;
    fout.close();
    cout << "File writed successfully!" << endl;
  } else {
    cout << "File could not open!";
  }

  cout << "Reading from file" << endl;
  ifstream inFile(file);
  if (inFile.is_open()) {
    char ch;
    while (inFile.get(ch)) {
      cout << ch;
    }
    inFile.close();
  } else {
    cout << "Error!" << endl;
  }
}

// int main(){
// 	string input;
// 	string file = "data.txt";

// 	cout << "Enter String: ";
// 	getline(cin, input);

// 	cout << "The length of the string entered: " << input.length() << endl;

// 	ofstream outFile(file, ios::app);
// 	if(outFile.is_open()){
// 		outFile << input;
// 		outFile.close();
// 		cout << "Write function performed!" << endl;
// 	}else{
// 		cout << "Error!" << endl;
// 	}

// 	cout << "Reading from file" << endl;
// 	ifstream inFile(file);
// 	if(inFile.is_open()){
// 		char ch;
// 		while(inFile.get(ch)){
// 			cout << ch;
// 		}
// 		inFile.close();
// 	}else{
// 		cout << "Error!" << endl;
// 	}
// 	return 0;
// }