#pragma once

#include <iostream>
#include "windows.h"

using namespace std;

class B1 {
	int a;
public:
	B1(int x) { a = x; }
	void show_B1() { cout << "B1 =   " << a << "\n";}
};

class B2 {
	int b;
public:
	B2(int x) { b = x; }
	void show_B2() { cout << "B2 =   " << b << "\n";}
};

class D1 : protected B1 {
	int c;
public:
	D1(int x, int y): B1(y) { c = x; }
	void show_D1() { cout << "D1 =   " << c << "\n"; show_B1();}
};

class D2: public B1 {
	int d;
public:
	D2(int x, int y): B1(y) { d = x; }
	void show_D2() { cout << "D2 =   " << d << "\n"; show_B1();}
};

class D3 : protected B2, protected D2 {
	int e;
public:
	D3(int x, int y, int z, int i) : B2(y), D2(z, i) { e = x; }
	void show_D3() { cout << "D3 =   " << e << "\n"; show_B2(); show_D2();}
};

class D4: public D1, public D3 {
	int f;
public:
	D4(int x, int y, int z, int i, int j, int g, int k): D1(y, z), D3( i, j, g, k) { f = x; }
	void show_D4() { cout << "D4 =   " << f << "\n"; show_D1(); show_D3();}
};
