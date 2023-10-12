#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		putchar(48 + a);
		if (a < 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
