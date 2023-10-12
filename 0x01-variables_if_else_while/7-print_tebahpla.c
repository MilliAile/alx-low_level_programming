#include <stdio.h>
/*
 * main - Entry point
 *
 * return - Always 0 (success)
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
