#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream inFile("check.txt");
	string line;
	if(inFile.is_open()){
		int wa = 0;
		while(getline(inFile, line)){
			if(line[0] != 'a' && line[0] != 'A'){
				wa++;
			}
		}
		cout << "Lines starting without A/a: " << wa << endl;
		inFile.close();
	}else{
		cout << "Error!" << endl;
	}
	return 0;
}