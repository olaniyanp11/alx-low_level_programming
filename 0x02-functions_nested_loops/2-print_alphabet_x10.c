#include "main.h"

/**
 * print_alphabet_x10 - print out alphabets 10x
 * Return : 0
 */
void print_alphabet_x10(void)
{
	int n;
	int i;

	for (n = 0; n <= 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

