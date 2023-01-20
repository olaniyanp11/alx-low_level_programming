#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @size : the size of the array
 * @array : array of integers
 * @action : pointers to functions to perform on the array of int
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	int j = 0;

	if (size && array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[j]);
			j++;
		}
	}
}
