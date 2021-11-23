#include "MyClass.h"

int main() {

	
	MyClass<int> A(20);
	MyClass<int> B(15);
	MyClass<int> temp_int;
	
	A.show();
	cout << '+' << endl;
	B.show();
	temp_int = A + B;
	cout << '=' << endl;
	temp_int.show();
	cout << endl;
	
	MyClass<float> C(15.6);
	MyClass<float> D(17.7);
	MyClass<float> temp_fl;
	C.show();
	cout << '+' << endl;
	D.show();
	temp_fl = C + D;
	cout << '=' << endl;
	temp_fl.show();

	return 0;
}