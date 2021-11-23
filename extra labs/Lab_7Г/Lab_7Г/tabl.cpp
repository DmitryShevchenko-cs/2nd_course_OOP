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
}

void DataFile::DataStatus() {


}

void DataFile::writeToFile(string filename, table data) {

	fstream fil(filename, ios::out);

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
	cout << "¬ведите номер строки ";
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
		for (int i = 0; i < N; i++)
			fil.write((char*)&data[i], sizeof(table));

	}
	fil.close();

}

void DataFile::readData(string filename, table* data) {


	fstream fil(filename, ios::in);

	if (!fil.is_open())
		cout << "error";
	else {
		for (int i = 0; i < sizeofFile(filename); i++)
			fil.read((char*)&data[i], sizeof(table));

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

