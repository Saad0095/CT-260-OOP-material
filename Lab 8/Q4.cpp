#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string title;
    bool isAvailible;

public:
    Media(string t) : title(t), isAvailible(true) {}

    void borrowing() { 
        if (isAvailible){
            isAvailible = false;
            cout << title << " borrowed!" << endl; 
        }
    }

    void returning() {
         if (!isAvailible){
            isAvailible = true;
            cout << title << " returned!" << endl;
        }
    }
};

class BookAttr { 
protected: 
    string author; 
public: 
    BookAttr(string a) : author(a) {} 
};

class MagazineAttr {
protected:
    int issueNo;
public:
    MagazineAttr(int i) : issueNo(i) {}
};

class DVDAttr {
protected:
    string director;
public:
    DVDAttr(string d) : director(d) {}
};

class Book : public Media, public BookAttr {
public:
    Book(string t, string a) : Media(t), BookAttr(a) {}

    void display() {
        cout << "Book: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

class Magazine : public Media, public MagazineAttr {
public:
    Magazine(string t, int i) : Media(t), MagazineAttr(i) {}

    void display() {
        cout << "Magazine: " << title << endl;
        cout << "Issue No: " << issueNo << endl;
    }
};

class DVD : public Media, public DVDAttr {
public:
    DVD(string t, string d) : Media(t), DVDAttr(d) {}

    void display() {
        cout << "DVD: " << title << endl;
        cout << "Directed by: " << director << endl;
    }
};

int main() {
    Book b("C++ Programming", "David");
    Magazine m("DailyDawn", 25);
    DVD d("National Geographic", "Harry");
    b.borrowing();
    b.display();
    b.returning();
    b.display();
    
    m.borrowing();
    m.display();
    m.returning();
    m.display();

    d.borrowing();
    d.display();
    d.returning();
    d.display();
    return 0;
}