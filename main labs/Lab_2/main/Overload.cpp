#include "Overload.h"

overload::overload() {
	type = '_';
	temperature = 0;
	speed = 0;
}

overload::overload(const char* name, string type, int temperature, unsigned int speed){
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);

	this->type = type;
	this->temperature = temperature;
	this->speed = speed;
}

void overload::set(char* n, const string t, const int tem, const unsigned int sp) {
	strcpy(this->name, n);
	this->type = t;
	this->temperature = tem;
	this->speed = sp;

}

void overload::get(char* a, string& b, int& c, unsigned int& d)const {
	delete[] a;
	a = new char[strlen(this->name) + 1];
	strcpy(a, this->name);

	b = type;
	c = temperature;
	d = speed;

	cout << a << " ";
	cout << b << " ";
	cout << c << " ";
	cout << d << " ";
	cout << "\n";
}

void overload::show()const {
	cout << name << " ";
	cout << type << " ";
	cout << temperature << " ";
	cout << speed << " ";
}

void  overload::operator == (const overload& other) {

	if (strcmp(this->name, other.name))
		cout << "Данные экземпляры класса не равны." <<endl;
	else if (this->type != other.type)
		cout << "Данные экземпляры класса не равны." << endl;
	else if (this->temperature != other.temperature)
		cout << "Данные экземпляры класса не равны." << endl;
	else if (this->speed != other.speed)
		cout << "Данные экземпляры класса не равны." << endl;
	else cout<< "Экземпляры класса равны."<<endl;

}

overload overload::operator = (const overload& other) {
	delete[] this->name;
	this->name = new char[strlen(other.name) + 2];
	if (!this->name) {
		cout << "Ошибка! Память не выделена.";
		exit(1);
	}
	strcpy(name, other.name);
	this->type = other.type;
	this->temperature = other.temperature;
	this->speed = other.speed;
	return other;
}

overload overload::operator + (const overload& other) {

	overload temp;
	delete[] temp.name;
	temp.name = new char(strlen(name) + strlen(other.name) + 2);
	strcpy(temp.name, name);
	strcat(temp.name, other.name);
	temp.type = this->type + other.type;
	temp.temperature = this->temperature + other.temperature;
	temp.speed = this->speed + other.speed;
	return temp;
}

int isvalid(int a, int b) {
	
	if (((a > N - 1) || (a < 0)) || ((b > N - 1) || (b < 0)))
	{
		cout << "Ошибка! Экземпляра с таким индексом не существует.\n\n";
		return -1;
	}
	else if (a == b)
	{
		cout << "Ошибка! Экземпляр не может быть записан сам в себя.\n\n";
		return -1;
	}
	return 0;
}

ostream& operator<<(ostream& stream, overload& other) {
	shapka();
	stream << "|" << setw(11) << other.name << "|";
	stream << setw(7) << other.type << "|";
	stream << setw(11) << other.temperature << "|";
	stream << setw(13) << other.speed << "|";
	linebuild();
	return stream;
}

istream& operator>>(istream& stream, overload& other) {
	cout << "Вещество, Тип , Температура , Скорость: \n";
	stream >> other.name;
	stream >> other.type;
	stream >> other.temperature;
	stream >> other.speed;
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

int overload::operator[] (int i) {
	return strlen(name);
}