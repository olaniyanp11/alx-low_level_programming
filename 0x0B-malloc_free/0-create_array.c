#include <stdio.h>
#include <main.h>
#include <stdlib.h>
 /**
  * create_array - prints the size of an array of chars.
  * @c: the address of memory to print
  * @i: the increment value
  * @size: the size of the memory to print
  *
  * Return : nothing
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(c) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
