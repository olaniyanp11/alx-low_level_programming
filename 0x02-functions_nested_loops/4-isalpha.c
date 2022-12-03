#include <stdio.h>
/**
 * _isalpha - checks if c isan alphabet
 * @c : is a variable  used to check
 * Return: 0
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
