#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *	adds positive numbers passed in
 *	from the command line.
 * @argc: number of cli args
 * @argv: list of cli args
 * Return: 1 if any numbers contains a non-digit symbol, else 0
 */
int main(int argc, char *argv[])
{
	unsigned int total = 0;
	unsigned int num;
	int x;
	int y;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		num = atoi(argv[x]);
		total += num;
	}
	printf("%d\n", total);
	return (0);
}
