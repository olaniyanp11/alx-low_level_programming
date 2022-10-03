#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - to print positive number
 * @argc: involved with the numbers
 * @argv: involved with chars
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int i;
	int sum;
	int j;
	(void)argc;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error \n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
