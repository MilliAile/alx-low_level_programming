#include "mill.h"

/**
 * _puts - string followed by newline
 * @str: string to be printed
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
