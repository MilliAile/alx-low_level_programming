#include <stdio.h>
/**
 * main - Entry point
 * @argc: the number of commandline arguement
 * @argv: an array containing command line arguement
 * Return: 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	argc = argc - 1;
	printf("%d\n", argc);
	return (0);
}
