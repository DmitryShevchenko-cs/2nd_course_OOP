#include "timer.h"

Timer::Timer(const int& sec) {
	seconds = sec;
}

Timer::Timer(const int& min, const int& sec) {

	seconds = (min * 60) + sec;

}

Timer::Timer(const Timer& ob) {

	seconds = ob.seconds;
}

void Timer::show()const {
	cout << seconds << " s" << endl;
}