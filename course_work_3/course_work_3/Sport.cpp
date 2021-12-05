#include "Sport.h"
/////////////// Sport
Sport::Sport() {
	this->name = "___";
	this->data = "___";
}
Sport::Sport(System::String^ Name, System::String^ Data) {
	this->name = Name;
	this->data = Data;
}
void Sport::Set(System::String^ Name, System::String^ Data) {
	this->name = Name;
	this->data = Data;
}
void Sport::setName(System::String^ Name) {
	this->name = Name;
}

void Sport::setData(System::String^ Data) {
	this->data = Data;
}
System::String^ Sport::getName() {
	return name;
}
System::String^ Sport::getData() {
	return data;
}

/////////////// DATA

DATA::DATA(System::String^ Name, System::String^ Data, System::String^ Type, System::String^ Team, System::String^ Country) {
	this->name = Name;
	this->data = Data;
	this->type = Type;
	this->team = Team;
	this->country = Country;
}

void DATA::setType(System::String^ Type) {
	this->type = Type;
}
void DATA::setTeam(System::String^ Team) {
	this->team = Team;
}
void DATA::setCountry(System::String^ Country) {
	this->country = Country;
}

System::String^ DATA::getType() {
	return type;
}
System::String^ DATA::getTeam() {
	return team;
}
System::String^ DATA::getCountry() {
	return country;
}