#include "mill.h"
/**
 * puts_half - prints a string
 * @str: the sting pointer
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int n;

	while (str[i] != '\0')
		i += 1;
	n = i / 2;
	if (i % 2 == 1)
		n += 1;
	while (str[n] != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
