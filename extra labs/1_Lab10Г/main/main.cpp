#include "timer.h"

int main() {

	Timer t1(55);
	t1.show();
	Timer t2(2, 12);
	t2.show();
	Timer t3(t1);
	t3.show();
	Timer t4(t2);
	t4.show();
	return 0;
}