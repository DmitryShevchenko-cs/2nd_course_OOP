#include "Book.h"

ostream& operator <<(ostream& S, Book& ob) {

	S << setw(20) << ob.name;
	S << setw(20) << ob.autor;
	S << setw(5) <<ob.pages;
	return S;
}

ostream& operator << (ostream& S, Library& ob) {

	S << (Book&)ob;
	S << setw(4) << ob.number;
	S << setw(6) << ob.availability << endl;
	return S;
}
