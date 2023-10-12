#include <stdio.h>
/**
 * main - Entry point
 *
 * return - Always 0 (success)
 */
int main(void)
{
	char a = 'a';
	char b = '0';

	for (; b <= '9'; b++)
	{
		putchar(b);
	}
	for (; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
