#include <stdio.h>
/**
 *main - Entry point
 *
 * return - Always 0 (Success)
 */
int main(void)
{
	char a = '0';

	for (; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
