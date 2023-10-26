#include "main.h"
/**
 * _puts_recursion - function that print string
 * @s: string to be printed using recursion
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
