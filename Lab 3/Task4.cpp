#include <iostream>
#include <string>
using namespace std;

class BookType {
private:
  string title;
  string authors[4];
  int numberOfAuthors;
  string publisher;
  string ISBN;
  float price;
  int numberOfCopies;
  int yearOfPublication;

public:
  BookType() {
    title = "";
    numberOfAuthors = 0;
    publisher = "";
    ISBN = "";
    price = 0.0;
    numberOfCopies = 0;
    yearOfPublication = 0;
  }

  BookType(string t, string auth[], int n, string pub, string id, float p,
           int copies, int year) {
    title = t;
    numberOfAuthors = n;
    for (int i = 0; i < numberOfAuthors; i++) {
      authors[i] = auth[i];
    }
    publisher = pub;
    ISBN = id;
    price = p;
    numberOfCopies = copies;
    yearOfPublication = year;
  }

  string getTitle() { return title; }
  string getISBN() { return ISBN; }
  int getCopies() { return numberOfCopies; }

  void setTitle(string t) { title = t; }
  void setISBN(string i) { ISBN = i; }
  void setCopies(int copies) { numberOfCopies = copies; }
  void updateCopies(int copies) { numberOfCopies += copies; }

  void display() {
    cout << "Title: " << title << endl;
    cout << "Authors: ";
    for (int i = 0; i < numberOfAuthors; i++)
      cout << authors[i] << (i < numberOfAuthors - 1 ? ", " : "");
    cout << endl;
    cout << "Publisher: " << publisher << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Price: $" << price << endl;
    cout << "Copies: " << numberOfCopies << endl;
    cout << "Year: " << yearOfPublication << endl;
    cout << "\n" << endl;
  }
};

int searchByTitle(BookType books[], int size, string title) {
  for (int i = 0; i < size; i++) {
    if (books[i].getTitle() == title)
      return i;
  }
  return -1;
}

int searchByISBN(BookType books[], int size, string isbn) {
  for (int i = 0; i < size; i++) {
    if (books[i].getISBN() == isbn)
      return i;
  }
  return -1;
}

int main() {
  BookType books[100];

  string author1[2] = {"Ali", "Ahmed"};
  books[0] = BookType("C++ Programming", author1, 2, "Tech Press", "12345",
                      500.5, 10, 2023);

  string author2[1] = {"Saad"};
  books[1] =
      BookType("OOPs", author2, 1, " Udu Bazar", "67890", 800.0, 5, 2020);

  books[0].display();
  books[1].display();

  string searchTitle = "C++ Programming";
  int index = searchByTitle(books, 100, searchTitle);
  if (index != -1) {
    cout << "Book found at index " << index << " for title: " << searchTitle
         << endl;
  } else {
    cout << "Book not found for title " << searchTitle << endl;
  }

  string searchISBNCode = "67890";
  index = searchByISBN(books, 100, searchISBNCode);
  if (index != -1)
    cout << "Book found at index " << index << " for ISBN: " << searchISBNCode
         << endl;
  else
    cout << "Book not found for ISBN: " << searchISBNCode << endl;

  books[0].updateCopies(5);
  cout << "Updated copies for " << books[0].getTitle() << ": "
       << books[0].getCopies() << endl;

  return 0;
}
