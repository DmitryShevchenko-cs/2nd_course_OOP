#include "MyClass.h"

template MyClass <int>;
template MyClass <float>;

template <class T>
MyClass<T>::MyClass() {
	num = 0;
}

template <class T>
MyClass<T>::MyClass(T NUM) {
	num = NUM;
}

template <class T>
void MyClass<T>::show() {
	cout << this->num << endl;
}

template <class T>
T& MyClass<T>::operator + (MyClass<T>& ob) {

	T NUM;
	NUM = this->num + ob.num;
	return NUM;
}

