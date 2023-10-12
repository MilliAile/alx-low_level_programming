#include <stdio.h>
/**
 * main - Entry point
 *
 * return - Always 0 (Success)
 *
 */
int main(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
