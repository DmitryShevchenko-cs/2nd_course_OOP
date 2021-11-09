#pragma once

#include <iostream>
#include "windows.h"

using namespace std;

class B1 {
	int a;
public:
	B1(int x) { a = x; }
	virtual void show() { cout << "B1 =   " << a << "\n";}
};

class B2 {
	int b;
public:
	B2(int x) { b = x; };
	virtual void show() { cout << "B2 =   " << b << "\n";}
};

class D1 : virtual protected B1 {
	int c;
public:
	D1(int x, int y): B1(y) { c = x; }
	void show() { cout << "D1 =   " << c << "\n";}
};

class D2: virtual public B1 {
	int d;
public:
	D2(int x, int y): B1(y) { d = x; }
	void show() { cout << "D2 =   " << d << "\n";}
};

class D3 : protected B2, protected D2 {
	int e;	
public:
	D3(int x, int y, int z, int i) : B1(i), B2(y), D2(z, i) { e = x; }
	void show() { cout << "D3 =   " << e << "\n"; B2::show(); D2::show();}
};

class D4: public D1, public D3 {
	int f;
public:
	D4(int x, int y, int z, int i, int j, int g): B1(z), D1(y, z), D3( i, j, g, z) { f = x; }
	void show() { cout << "D4 =   " << f << "\n"; B1::show(); D1::show(); D3::show();}
};

///*..*/D4(1, 2, 3, 4, 5, 6)
//D1=2
//D2=6
//D3=4
//D4=1
//B1=3
//B2=5