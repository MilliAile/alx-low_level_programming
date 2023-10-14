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
	int c = b + 1;

	for (a = 0; a < b; a++)
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar(48 + a);
				putchar(48 + b);
				putchar(48 + c);
				if (a < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
