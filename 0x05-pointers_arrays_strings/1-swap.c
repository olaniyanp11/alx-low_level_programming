#include "main.h"
/**
 * swap_int - swaps the value of a and b
 * @a :first pointer
 * @b :second pointer
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
