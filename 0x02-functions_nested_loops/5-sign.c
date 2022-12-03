#include <stdio.h>
/**
 * print_sign - prints the sign of the any number passed
 * @n : used as a variable
 * Return: 0
 *
*/
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
