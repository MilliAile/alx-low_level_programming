#include "mill.h"
#include <string.h>
/**
 * puts_half - prints a string
 * @str: the sting pointer
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int n;
	int h;

	h = strlen(str);
	if (h % 2 == 1)
		n = h / 2 + 1;
	else
		n = h  / 2;
	for (i = n; i < h; i++)
		_putchar(str[i]);
	_putchar('\n');
}
