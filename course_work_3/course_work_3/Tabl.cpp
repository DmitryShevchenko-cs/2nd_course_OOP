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
	SP[0] = gcnew SPORT("��������", "16.07.2003", "��������", "���", "�������");
	SP[1] = gcnew SPORT("��������", "16.07.2003", "��������", "���", "�������");
	SP[2] = gcnew SPORT("��������", "16.07.2003", "��������", "���", "�������");
	SP[3] = gcnew SPORT("��������", "16.07.2003", "��������", "���", "�������");
	SP[4] = gcnew SPORT("��������", "16.07.2003", "��������", "���", "�������");

	std::fstream f("Sportsmen.txt", std::ios::binary | std::ios::in | std::ios::app);
	if (!f.is_open())
		exit(0);
	else {
		

	
		

	}
	f.close();
	
}