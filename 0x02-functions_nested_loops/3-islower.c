#include <stdio.h>
/**
 * _islower - return 1 with lower case and 0 with upper case
 * @c : a variable
 * Return: 0 success
*/
int _islower(int c)
{
	if (c > 96 && c < 122)
		return (1);
	else
		return (0);
}
