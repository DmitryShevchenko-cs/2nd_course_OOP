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

	if (num <= 0)
		cout << "error";
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

	cout << "Количество строк: " << num << endl;
	for (int i = 0; i < num; i++)
		data[i].show();
	cout << endl;

}

void DataFile::writeToFile(string filename, table data) { //начало конец?

	fstream fil(filename, ios::out | ios::app);

	if (!fil.is_open())
		cout << "error";
	else {

		fil.write((char*)&data, sizeof(table));

	}
	fil.close();

}

void DataFile::readFromFile2(string filename, table& data) {

	int choice;
	cout << sizeofFile(filename) << " - кол-во строк" << endl;
	cout << "Введите номер строки ";
	cin >> choice;

	fstream fil(filename, ios::in);

	if (!fil.is_open())
		cout << "error";
	else {
		fil.seekg((choice * sizeof(table)), ios::beg);
		fil.read((char*)&data, sizeof(table));

	}
	fil.close();

}

void DataFile::writeData(string filename, table* data) {

	fstream fil(filename, ios::out);

	if (!fil.is_open())
		cout << "error";
	else {
		for (int i = 0; i < num; i++)
			fil.write((char*)&data[i], sizeof(table));

	}
	fil.close();

}

void DataFile::readData(string filename, table*& data) {

	int size = sizeofFile(filename);
	data = new table[size];
	fstream fil(filename, ios::in);

	if (!fil.is_open())
		cout << "error";
	else {
		for (int i = 0; i < sizeofFile(filename); i++)
			fil.read((char*)&data[i], sizeof(table));
		num = sizeofFile(filename);
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

