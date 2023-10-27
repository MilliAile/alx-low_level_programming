#include <stdio.h>
/**
 * main - Entry point
 * @argc: the number of command line arguement
 * @argv: an array containing command line arguement
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
