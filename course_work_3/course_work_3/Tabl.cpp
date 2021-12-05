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

void WriteInFile(SPORT^ ob) {

	array< SPORT^ >^ SP = gcnew array< SPORT^ >(5);
	SP[0] = gcnew SPORT("Шевченко", "16.07.2003", "Программ", "ХПИ", "Украина");
	SP[1] = gcnew SPORT("Шевченко", "16.07.2003", "Программ", "ХПИ", "Украина");
	SP[2] = gcnew SPORT("Шевченко", "16.07.2003", "Программ", "ХПИ", "Украина");
	SP[3] = gcnew SPORT("Шевченко", "16.07.2003", "Программ", "ХПИ", "Украина");
	SP[4] = gcnew SPORT("Шевченко", "16.07.2003", "Программ", "ХПИ", "Украина");

	std::fstream f("Sportsmen.txt", std::ios::binary | std::ios::in | std::ios::app);
	if (!f.is_open())
		exit(0);
	else {
		

	
		

	}
	f.close();
	
}