#pragma once
#include <iostream>
#include "windows.h"
#include <string>
#include <iomanip>

#define N 3

using namespace std;

class Book {
protected:
	int maxcol;
	string name;
	string autor;
	int col;
public:
	Book(string n, string a, int p, int max) : name(n), autor(a), col(p), maxcol(max) {};
	friend ostream& operator << (ostream& S, Book& ob);
};
	

class Library : protected Book {
	int number;
	bool availability;
public:
	Library(int num, string n, string a, int p, int max, bool avalible) : number(num), Book(n, a, p, max), availability(avalible) {};
	
	friend ostream& operator << (ostream& S, Library& ob);

	friend string check_name(Library* ob, string NAME);
	friend string check_availability(Library* ob, int num);
	friend void get(Library* ob, int num);
	friend void getback(Library* ob, int num);
};

string check_name(Library* ob, string NAME);
string check_availability(Library* ob, int num);
void get(Library* ob, int num);
void getback(Library* ob, int num);
int menu(Library* book);