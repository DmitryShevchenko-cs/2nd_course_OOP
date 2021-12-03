#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <windows.h>


using namespace std;
class name {
	string strNum;
public:
	name(string str) :strNum(str) {};
	friend bool operator < (const name& ob1, const name& ob2) { 
		return ob1.strNum < ob2.strNum; 
	}
	friend ostream& operator<<(ostream& s, const name& ob) {
		return s << ob.strNum;
	}
	bool operator()(const name& d1, const name& d2) const {
		return d1.strNum < d2.strNum;
	}

	string get() { return strNum; };
};

class number {
	long long num;
public:
	number(long long N) : num(N) {};
	friend ostream& operator<<(ostream& s, const number& ob) {
		return s << ob.num;
	}
	
	long long get() { return num; };

};

void printMap(multimap<name, number> m);
void searchname(multimap<name, number> m, string n);
void search_l(multimap<name, number> m, char ch);
void delete_l(multimap<name, number> &m, char ch);