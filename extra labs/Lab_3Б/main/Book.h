#pragma once
#include <iostream>
#include "windows.h"
#include <string.h>
#include <iomanip>

using namespace std;

class Book {
	string name;
	string autor;
	int pages;
public:
	Book(string n, string a, int p) : name(n), autor(a), pages(p) {};
	friend ostream& operator << (ostream& S, Book& ob);
};

class Library : protected Book {
	int number;
	bool availability;
public:
	Library(string n, string a, int p, int num, bool avalible) : Book(n, a, p), number(num), availability(avalible) {};
	friend ostream& operator << (ostream& S, Library& ob);

};