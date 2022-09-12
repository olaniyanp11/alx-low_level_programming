#include <stdio.h>
/**
 * main - prints the stdout
 * Return: 0 if successful
 */
int main(void)
{
	char lowerCase, not, nott;

	not = 'e';
	nott = 'q';

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		if (lowerCase != not && lowerCase != nott)
			putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
