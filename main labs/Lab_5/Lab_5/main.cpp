#include "complex.h"

int main() {


	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);

	try
	{
		fin.open("complex.tx");
		fin.close();

	}
	catch (const ifstream::failure& ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "error opening" << endl;
	}
	


}
