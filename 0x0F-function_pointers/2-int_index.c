#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @size : is the number of elements in the array
 * @cmp : is a pointer to the function to be used to compare values
 * @array : is the array of numbers worked on
 * Return: 0 always.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
