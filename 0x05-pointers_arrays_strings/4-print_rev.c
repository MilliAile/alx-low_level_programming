#include "mill.h"
/**
 * print_rev - print the reverse of string
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	int j;

	while (s[i])
		i++;
	for (int j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
