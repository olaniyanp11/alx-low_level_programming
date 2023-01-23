#include "main.h"

/**
 * jack_bauer -  a function that prints
 * every minute starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}
