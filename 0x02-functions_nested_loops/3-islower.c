#include <stdio.h>

/**
 * _islower : to check if am alphabetis lower case.
 * _islower return : 0 success
 * @c : any variable inputted by the user
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
