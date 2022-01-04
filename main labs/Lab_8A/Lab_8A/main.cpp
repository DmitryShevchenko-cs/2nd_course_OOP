#include "MyClass.h"

int main() {
	// сложить int и float в нашей програме нельзя
	
	MyClass<int> A(20); // первое число
	MyClass<int> B(15); // второе
	MyClass<int> temp_int; //ответ будт записан тут
	
	A.show();// вывод числа
	cout << '+' << endl;
	B.show();// вывод числа
	temp_int = A + B; // добавляем
	cout << '=' << endl;
	temp_int.show();// вывод ответа
	cout << endl;
	
	MyClass<float> C(15.6);// первое число
	MyClass<float> D(17.7);// второе
	MyClass<float> temp_fl;//ответ будт записан тут
	C.show();// вывод числа
	cout << '+' << endl;
	D.show();// вывод числа
	temp_fl = C + D;// добавляем
	cout << '=' << endl;
	temp_fl.show();// вывод ответа

	return 0;
}