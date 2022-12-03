#include <stdio.h>
#include "main.h"
/**
 * _abs - returns absolute value of int
 * _putchar - prints a single char
 * @n : used as a variable
 * Return: 0
 *
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
