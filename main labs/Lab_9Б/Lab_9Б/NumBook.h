#pragma once

#include <iostream>
#include <iomanip> // для setw()
#include <string>
#include <map>// для юза мап
#include <windows.h>


using namespace std;
class name {
	string strNum;
public:
	name(string str) :strNum(str) {};// конструктор с параметром
	friend bool operator < (const name& ob1, const name& ob2) {  // дружественный перегруженый оператор сравнения
		return ob1.strNum < ob2.strNum; 
	}
	friend ostream& operator<<(ostream& s, const name& ob) {  // дружественный перегруженый оператор вывода
		return s << ob.strNum;
	}
	bool operator()(const name& d1, const name& d2) const { // перегружен булевый оператор круглые скобки 
		return d1.strNum < d2.strNum;// возвращает результат сравнения
	}

	string get() { return strNum; }; // возвращает имя
};

class number {
	long long num;
public:
	number(long long N) : num(N) {};// конструктор с параметром
	friend ostream& operator<<(ostream& s, const number& ob) {// дружественный перегруженый оператор вывода
		return s << ob.num;
	}
	
	long long get() { return num; };// возвращает номер

};

void printMap(multimap<name, number> m); // печать мапа
void searchname(multimap<name, number> m, string n); //поиск имени
void search_l(multimap<name, number> m, char ch); // поиск по букве
void delete_l(multimap<name, number> &m, char ch); //удаление по букве