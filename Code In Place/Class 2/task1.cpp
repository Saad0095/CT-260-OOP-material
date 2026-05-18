#include <iostream>

using namespace std;

class BookRecord {
private:
  string title;
  int publicationYear;

public:
  void setTitle(string t) { title = t; }
  string getTitle() { return title; }
  void setPublicationYear(int year) { publicationYear = year; }
  int getPublicationYear() { return publicationYear; }
};

int main() {
  int n = 3;
  string title;
  int year;
  BookRecord books[n];
  for (int i = 0; i < n; i++) {
    cout << "Enter name of book: ";
    cin >> title;
    books[i].setTitle(title);
    cout << "Enter year of book published: ";
    cin >> year;
    books[i].setPublicationYear(year);
  }
  cout << "Book published after 2000: " << endl;

  for (int i = 0; i < n; i++) {
    if(books[i].getPublicationYear() > 2000){
        cout << books[i].getTitle() << endl;
    }
  }

  return 0;
}