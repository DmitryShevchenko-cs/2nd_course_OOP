#include "swap.h"


void Swap::swap_ref(int*& a) {

	int max = *a, maxi = 0, min = *a, mini = 0;
	int change;

	for (int i = 0; i < 3; i++) {
		if (*(a + i) > max) {
			max = *(a + i);
			maxi = i;

		}

	}
	for (int i = 0; i < 3; i++) {
		if (min > *(a + i) && *(a + i) >= 0) {
			min = *(a + i);
			mini = i;
		}

	}

	change = *(a + maxi);
	*(a + maxi) = *(a + mini);
	*(a + mini) = change;
}
void Swap::swap_pointer(int* a) {

	int max = *a, maxi = 0, min = *a, mini = 0;
	int change;

	for (int i = 0; i < 3; i++) {
		if (*(a + i) > max) {
			max = *(a + i);
			maxi = i;

		}
			
	}
	for (int i = 0; i < 3; i++) {
		if (min > *(a + i) && *(a + i) >= 0) {
			min = *(a + i);
			mini = i;
		}
			
	}

	change = *(a + maxi);
	*(a + maxi) = *(a + mini);
	*(a + mini) = change;

}