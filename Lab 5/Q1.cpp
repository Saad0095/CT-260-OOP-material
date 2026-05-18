#include<iostream>
using namespace std;

class base{
	private:	
		int privateInt;
	protected:
		int protectedInt;
	public:	
		int publicInt;
		void setPrivateInt(int prv){
			privateInt = prv;
		}		
		void setProtectedInt(int prot){
			protectedInt = prot;
		}	
		void setPubicInt(int pub){
			publicInt = pub;
		}
		int getPrivateInt(){
			return privateInt;
		}		
		int getProtectedInt(){
			return protectedInt;
		}	
		int getPublicInt(){
			return publicInt;
		}	
};

class publicChild: public base {
};

class protectedChild: protected base {
};

class privateChild: private base {
};

int main(){
    publicChild pub1;
    protectedChild prot1;
    privateChild priv1;

    pub1.setPubicInt(1);
    pub1.setPrivateInt(2);
    pub1.setProtectedInt(3);
//    prot1.setPubicInt(2); // Cannot access
//    priv1.setPubicInt(3); // Cannot access

    cout << "Public Class " << pub1.getPublicInt() << endl;
    cout << "Private Class " << pub1.getPrivateInt() << endl;
    cout << "Protected Class " << pub1.getProtectedInt() << endl;
    
//    cout << "Protetcted Class " << prot1.getPublicInt(); //// Cannot access
//    cout << "Protetcted Class " << prot1.getProtectedInt() << endl; //// Cannot access
//    cout << "Protetcted Class " << prot1.getPrivateInt() << endl; //// Cannot access

//    cout << "Private Class" << priv1.getPublicInt() << endl; // // Cannot access
//    cout << "Private Class" << priv1.getProtectedInt() << endl; // // Cannot access
//    cout << "Private Class" << priv1.getPrivateInt() << endl; // // Cannot access
	return 0;
}