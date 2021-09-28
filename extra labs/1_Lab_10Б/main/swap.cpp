#include "swap.h"

void swap(int* a, int* b, int* c) {
	int* max = a;
	int* min = c;

	if (*max < *b) max = b;
		
	if (*max < *c) max = c;
	
	if (*min > *b) min = b;
	
	if (*min > *a) min = a;
	
	swap(*max, *min);
}
void swap(int& a, int& b, int& c) {
	int* max = &a;
	int* min = &c;

	if (*max < b) max = &b;

	if (*max < c) max = &c;

	if (*min > b) min = &b;

	if (*min > a) min = &a;

	swap(*max, *min);
}