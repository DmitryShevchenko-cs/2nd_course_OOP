#include "Tabl.h"
#include <Windows.h>

using namespace coursework3;
using namespace System;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Tabl);
	return 0;
}

void WriteInFile() {

	array< SPORT^ >^ SP = gcnew array< SPORT^ >(5);
	SP[0] = gcnew SPORT("Шевченко", "16.07.2003", "Программ", "ХПИ", "Украина");
	SP[1] = gcnew SPORT("йцуйцу", "213214", "345345", "ХваПИ", "праина");
	SP[2] = gcnew SPORT("йцуо", "345345", "П34534м", "ХпвапПИ", "Укр=на");
	SP[3] = gcnew SPORT("йцуекуе", "345345", "435345мм", "ХПвапИ", "Укпина");
	SP[4] = gcnew SPORT("кспва", "43345", "Пр435345м", "ХвпваИ", "араина");

	std::fstream f("Sportsmen.txt", std::ios::binary | std::ios::out | std::ios::app);
	if (!f.is_open())
		exit(0);
	else {

		

	}
	f.close();
	
}