#include <stdio.h>
#include <string.h>
/**
 * print_rev - function to reverse the string
 * @s: the string address
 */
void print_rev(char *s)
{
	int h = strlen(s);
	int a;

	for (a = h - 1; a >= 0; a--)
	{
		putchar(*(s+a));
	}
	putchar('\n');
}
