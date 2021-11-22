#include "Table.h"

table::table() {
	name = "";
	type = '_';
	temperature = 0;
	speed = 0;
}

table::table(const string name, char type, int temperature, unsigned int speed){

	this->name = name;
	this->type = type;
	this->temperature = temperature;
	this->speed = speed;

}

ostream& operator<<(ostream& stream, table& other) {
	//shapka();
	stream << "|" << setw(11) << other.name << "|";
	stream << setw(7) << other.type << "|";
	stream << setw(11) << other.temperature << "|";
	stream << setw(13) << other.speed << "|";
	linebuild();
	return stream;
}


istream& operator>>(istream& stream, table& other) {
	cout << "Вещество, Тип , Температура , Скорость: \n";
	stream >> other.name >> other.type >> other.temperature >> other.speed;
	return stream;
}

void shapka(void)
{

	cout << "_______________________________________________\n";
	cout << "|          Скорость звука в жидкостях         |\n";
	cout << "|---------------------------------------------|\n";
	cout << "| Вещество  |  Тип  |Температура|  Скорость   |\n";
	cout << "|           |       |  (град.С) |   (м/сек)   |\n";
	cout << "|-----------|-------|-----------|-------------|\n";
}

void linebuild(void) {

	cout << "\n|---------------------------------------------|\n";
}

void writeToFile(string filename, table obj){
	
	fstream fw;
	fw.open(filename, ios::binary | ios::out);

	if (!fw.is_open())
		cout << "error" << endl;
	else 
		fw.write((char*)&obj, sizeof(table));
	
	fw.close();
}

table readFromFile(string filename){

	table t;
	fstream fr;
	fr.open(filename, ios::binary | ios::in);
	if (!fr.is_open())
		cout << "error" << endl;
	else {
		fr.seekg(0);
		fr.read((char*)&t, sizeof(table));
	}
	fr.close();
	return t;
}