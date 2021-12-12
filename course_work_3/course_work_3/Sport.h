#pragma once

ref class DATA2{
private:
	bool is;
	System::String^ info;
public:
	DATA2(System::String^ Info);
	DATA2();
	void setInfo(System::String^ Info);
	System::String^ getInfo();
};


ref class DATA : public DATA2 {
private:
	System::String^ type;
	System::String^ team;
	System::String^ country;
public:
	DATA() { type = ""; team = ""; country = ""; };
	DATA(System::String^ Type, System::String^ Team, System::String^ Country, System::String^ Info);
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
	SPORT() { name = ""; data_bd = ""; }
	SPORT(System::String^ Name, System::String^ Data_bd, 
		System::String^ Type, System::String^ Team, System::String^ Country,
		System::String^ Info); 
	SPORT(System::String^ Name, System::String^ Data_bd, System::String^ Type, System::String^ Team, System::String^ Country);
	void setName(System::String^ Name);
	void setData(System::String^ Data_bd);
	System::String^ getName();
	System::String^ getData();
};
