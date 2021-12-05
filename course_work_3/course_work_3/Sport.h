#pragma once

ref class Sport
{
protected:
	System::String^ name;
	System::String^ data;
public:
	Sport();
	Sport(System::String^ Name, System::String^ Data);
	void Set(System::String^ Name, System::String^ Data);
	void setName(System::String^ Name);
	void setData(System::String^ Data);
	
	System::String^ getName();
	System::String^ getData();
};

ref class DATA : public Sport {
private:
	System::String^ type;
	System::String^ team;
	System::String^ country;
public:
	DATA(System::String^ Name, System::String^ Data, System::String^ Type, System::String^ Team, System::String^ Country);
	void setType(System::String^ Type);
	void setTeam(System::String^ Team);
	void setCountry(System::String^ country);

	System::String^ getType();
	System::String^ getTeam();
	System::String^ getCountry();
};



//ref class DATA2 : public DATA{
//private:
//
//public:
//
//
//};