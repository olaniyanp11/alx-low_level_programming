#include "function_pointers.h"
/**
 * print_name - prints the name a name
 * @name : name of person
 * @f : the pointer to a string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
