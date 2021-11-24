#include "Tabl.h"

void table::set(const string n, const char t, const int tem, const unsigned int sp) {
	this->name = n;
	this->type = t;
	this->temperature = tem;
	this->speed = sp;

}

void table::get(string& a, char& b, int& c, unsigned int& d)const {

	a = name;
	b = type;
	c = temperature;
	d = speed;

}

void table::show()const {
	cout << name << " ";
	cout << type << " ";
	cout << temperature << " ";
	cout << speed << " ";
	cout << endl;
}

void DataFile::dataCreate(table*& data) {
	delete[] data;
	data = new table[num];
	if (num <= 0)
		throw MyException("База пустая");
	else {
		data = new table[num];
		string n;
		char t;
		int tem;
		unsigned int sp;
		for (int i = 0; i < num; i++) {
			cout << "Вещество, Тип , Температура , Скорость: ";
			cin >> n;
			cin >> t;
			cin >> tem;
			cin >> sp;
			data[i].set(n, t, tem, sp);
		}
	}
}

void DataFile::dataStatus(table* data) {
	if (num <= 0)
		throw MyException("База пустая");
	else {
		cout << "Количество строк: " << num << endl;
		for (int i = 0; i < num; i++) {
			cout << i + 1 << ". ";
			data[i].show();
		}
		cout << endl;
	}
	
}

void DataFile::writeToFile(string filename, table data) { 
	if (num <= 0)
		throw MyException("База пустая");
	else {
		fstream fil(filename, ios::out | ios::app);

		if (!fil.is_open())
			throw("Ошибка открытия файла на запись одной строки");
		else {

			fil.write((char*)&data, sizeof(table));
			cout << "Строка записана" << endl;
		}
		fil.close();
	}

}

void DataFile::readFromFile2(string filename, table& data) {

		int choice;
		cout << sizeofFile(filename) << " - кол-во строк" << endl;
		cout << "Введите номер строки для чтения";
		cin >> choice;

		fstream fil(filename, ios::in);

		if (!fil.is_open())
				throw MyException("Ошибка открытия файла на чтуние одной строки");
		else {
			fil.seekg(((choice - 1) * sizeof(table)), ios::beg);
			fil.read((char*)&data, sizeof(table));

		}
		fil.close();
	
}

void DataFile::writeData(string filename, table* data) {
	if (num <= 0)
		throw MyException("База пустая");
	else {
		fstream fil(filename, ios::out);
		if (!fil.is_open())
			throw MyException("Ошибка открытия файла на запись всей базы");
		else {
			
			fil.write((char*)data, sizeof(table));
			cout << "База записана" << endl;
		}
		fil.close();
	}

}

void DataFile::readData(string filename, table*& data) {

	int size = sizeofFile(filename);
	delete[] data;
	data = new table[size];
	num = size;
	fstream fil(filename, ios::in);

	if (!fil.is_open())
		throw MyException("Ошибка открытия файла на чтение всей базы");
	else {
		
		fil.read((char*)data, sizeof(table));
		num = sizeofFile(filename);
		cout << "База считана" << endl;
	}
	fil.close();
	
}

int sizeofFile(string filename) {
	int colStr = 0;
	ifstream size(filename);
	size.seekg(0, ios::end);
	long i = (long)size.tellg();
	colStr = i / sizeof(table);
	size.close();
	return colStr;
}

