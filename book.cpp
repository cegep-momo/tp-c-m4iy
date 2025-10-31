#include "book.h"
#include <iostream>

using std::string;

//constructeur vide
Book::Book() :  title(""), author(""), isbn(""), isAvailable(true), borrowerName("")
{

}
//constructeur parametre title author isbn
Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn), isAvailable(true), borrowerName("") {

        if (title.empty() || author.empty() || isbn.empty()) {
        throw invalid_argument("Le titre, autheur, et le ISBN ne peuvent pas etre vides.Saisissez de nouveau.");
    }
    }
//getters
string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

string Book::getISBN() const {
    return isbn;
}

bool Book::getAvailability() const {
    return isAvailable;
}

string Book::getBorrowerName() const {
    return borrowerName;
}

// setters
void Book::setTitle(const string& title) {
    this->title = title;
}

void Book::setAuthor(const string& author) {
    this->author = author;
}

void Book::setISBN(const string& isbn) {
    this->isbn = isbn;
}

void Book::setAvailability(bool available) {
    isAvailable = available;
}

void Book::setBorrowerName(const string& name) {
    borrowerName = name;
}

//methodes 
void Book::checkOut(const string&borrower){
   isAvailable = false;
   borrowerName = borrower;
}

void Book::returnBook(){
    isAvailable = true;
    borrowerName = "";
}

string Book::toString() const {
    string availabilityString = isAvailable ? "Oui" : "Non";
    string borrowerString = isAvailable ? "-" : borrowerName;

    return "Titre: " + title + "\n" +
           "Auteur: " + author + "\n" +
           "ISBN: " + isbn + "\n" +
           "Disponible?: " + availabilityString + "\n" +
           "Emprunteur: " + borrowerString;
}

string Book::toFileFormat() const{
    return title + "|" + author + "|" + isbn + "|" + (isAvailable ? "1" : "0") + "|" + borrowerName;
}

void Book::fromFileFormat(const string& line){
    
}

