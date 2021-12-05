#pragma once

//ref class DATA2{
//private:
//
//public:
//
//
//};


ref class DATA {
private:
	System::String^ type;
	System::String^ team;
	System::String^ country;
public:
	DATA(System::String^ Type, System::String^ Team, System::String^ Country);
	void setType(System::String^ Type);
	void setTeam(System::String^ Team);
	void setCountry(System::String^ country);

	System::String^ getType();
	System::String^ getTeam();
	System::String^ getCountry();
};

ref class SPORT : public DATA {
private:
	System::String^ name;
	System::String^ data_bd;
public:
	SPORT(System::String^ Name, System::String^ Data_bd, System::String^ Type, System::String^ Team, System::String^ Country);
	void Set(System::String^ Name, System::String^ Data_bd);
	void setName(System::String^ Name);
	void setData(System::String^ Data_bd);
	System::String^ getName();
	System::String^ getData();
};
