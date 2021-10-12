#include "SOBAKA.h"

ostream& operator <<(ostream& S, SOBAKA& ob) {

	S << ob.weigth << '\t' << ob.age;
	return S;
}

ostream& operator << (ostream& S, SPANIEL& ob) {

	S << (SOBAKA&)ob << '\t' <<ob.color;
	return S;
}
