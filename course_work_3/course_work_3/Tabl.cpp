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

