#include <stdio.h>

/**
 * main - to print all arguements passed
 * @argc: arguements for counting
 * @argv: arguements for giving value of argv
 * Return: 0 always success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		(void)i;
		printf("%s\n", argv[i]);
	}
	return (0);
}
