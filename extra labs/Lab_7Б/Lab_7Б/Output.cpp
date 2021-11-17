#include "Output.h"


ostream& operator << (ostream& s, const OUTPUT& ob) {

	for (int i = 0; i < ob.str.length(); i++) {

		if ((ob.str[i] < 48 || ob.str[i] > 58) && (ob.str[i] < 'À' || ob.str[i] > 'ß') && (ob.str[i] < 'A' || ob.str[i] > 'Z'))
			s << ob.str[i];
		else s << ' ';

	}

	return s;
}