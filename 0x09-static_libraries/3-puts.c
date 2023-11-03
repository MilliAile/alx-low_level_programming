#include <stdio.h>
/**
 * _puts - function to print string
 * @str: the address of the first string element
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
