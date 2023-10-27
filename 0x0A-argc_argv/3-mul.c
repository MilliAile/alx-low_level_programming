#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: the number of command line arguement
 * @argv: an array containing command line arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;
	int mul = 1;

	if (argc == 3)
	{
		for (n = 1; n < argc; n++)
		{
			mul *= atoi(argv[n]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
