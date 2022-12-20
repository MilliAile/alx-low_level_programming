#include "mill.h"
#include <stdio.h>
/**
 * puts_half - prints a string
 * @str: the sting pointer
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int n;

	if (strlen(str) % 2 == 1)
		n = strlen(str) / 2 + 1;
	else
		n = strlen(str) / 2;
	for (i = n; i < strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
