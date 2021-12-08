#include "Sport.h"

////////////////// DATA2
DATA2::DATA2(System::String^ Info) {
	this->info = Info;
	is = true;
}
DATA2::DATA2() {
	is = false;
}
void DATA2::setInfo(System::String^ Info) {
	this->info = Info;
	is = true;
}
System::String^ DATA2::getInfo() {
	if (is)
		return info;
	else
		return "Нету информации";
}


/////////////// DATA

DATA::DATA(System::String^ Type, System::String^ Team, System::String^ Country, System::String^ Info) : DATA2(Info) {
	this->type = Type;
	this->team = Team;
	this->country = Country;
}

DATA::DATA(	System::String^ Type, System::String^ Team, System::String^ Country) {
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

/////////////// SPORT
SPORT::SPORT(System::String^ Name, System::String^ Data_bd, 
	System::String^ Type, System::String^ Team, System::String^ Country, System::String^ Info) : DATA(Type, Team, Country, Info) {
	this->name = Name;
	this->data_bd = Data_bd;
}

SPORT::SPORT(System::String^ Name, System::String^ Data_bd,
	System::String^ Type, System::String^ Team, System::String^ Country) : DATA(Type, Team, Country) {
	this->name = Name;
	this->data_bd = Data_bd;
}

void SPORT::Set(System::String^ Name, System::String^ Data_bd) {
	this->name = Name;
	this->data_bd = Data_bd;
}
void SPORT::setName(System::String^ Name) {
	this->name = Name;
}

void SPORT::setData(System::String^ Data_bd) {
	this->data_bd = Data_bd;
}
System::String^ SPORT::getName() {
	return name;
}
System::String^ SPORT::getData() {
	return data_bd;
}

