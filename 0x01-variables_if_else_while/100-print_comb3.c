#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = a + 1;

	for (a = 0 ; a < b; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar(48 + a);
			putchar(48 + b);
			if (a < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
