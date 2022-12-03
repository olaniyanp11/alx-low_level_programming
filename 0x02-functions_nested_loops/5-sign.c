#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of the any number passed
 * _putchar - prints a single char
 * @n : used as a variable
 * Return: 0
 *
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
