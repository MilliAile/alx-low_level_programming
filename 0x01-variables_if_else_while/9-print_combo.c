#include <stdio.h>
/**
 * main - Entry point
 *
 * return - Always 0
 */
int main(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		putchar(48 + a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
