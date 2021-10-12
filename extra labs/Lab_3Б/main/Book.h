#pragma once
#include <iostream>
#include "windows.h"
#include <string>
#include <iomanip>

#define N 3

using namespace std;

class Book {
protected:
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
	Library(int num, string n, string a, int p, bool avalible) : number(num), Book(n, a, p), availability(avalible) {};
	friend ostream& operator << (ostream& S, Library& ob);
	friend string cheak_name(Library* ob);
	friend string cheak_availability(Library* ob);
	friend void take(Library* ob);
};

string cheak_name(Library* ob);
string cheak_availability(Library* ob);
void take(Library* ob);