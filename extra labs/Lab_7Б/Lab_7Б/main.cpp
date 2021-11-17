#include "Output.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	OUTPUT ob("123ЫЫЫтест11SDHтекст");

	ob.show();
	cout << ob;
	ofstream fil("text.txt", ios::in | ios::app);
	fil << ob << endl;

	fil.close();
}