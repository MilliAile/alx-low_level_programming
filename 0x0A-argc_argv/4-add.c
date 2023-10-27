#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: the number of command line arguement
 * @argv: an array containing command line arguement
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isalpha(argv[i]))
			{
				printf("Error\n");
				break;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
