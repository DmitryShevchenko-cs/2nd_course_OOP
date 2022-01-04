#include "MyClass.h"

template MyClass <int>; // эти две записи означают то что мы можем юзать только int и float
template MyClass <float>;

template <class T>
MyClass<T>::MyClass() {// констр по-умолчанию
	num = 0;
}

template <class T>
MyClass<T>::MyClass(T NUM) {// констр с параметром
	num = NUM;
}

template <class T>
void MyClass<T>::show() { // вывод
	cout << this->num << endl;
}

template <class T>
T& MyClass<T>::operator + (MyClass<T>& ob) {

	T NUM;
	NUM = this->num + ob.num;//складываем числа
	return NUM;// выводим ответ в том типе в котором обращались
}

