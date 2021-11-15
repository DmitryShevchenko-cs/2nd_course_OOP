#include "Output.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	OUTPUT ob("123ЫЫЫтест11SDHтекст");
	
	ob.show();
	cout << ob;

	fstream fil("text.txt", ios::in | ios::app);
	
	if (fil.is_open())
		fil << ob << endl;

	else cout << "error";

	fil.close();
}