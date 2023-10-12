#include <stdio.h>
/**
 * main - Entry point
 *
 * return - Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	for (; a <= 'z'; a++)
	{
		putchar(a);
	}
	for ( ; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
