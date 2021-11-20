#include "MyClass.h"

int main() {

	
	MyClass<int> A(20);
	MyClass<int> B(15);
	MyClass<float> C(15.6);
	A.show();
	B.show();

	MyClass <int> temp_int;

	temp_int = A + B;
	temp_int.show();

	return 0;
}