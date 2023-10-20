#include "main.h"
/**
 * print_alphabet - the function to print the alphabet in lowercase
 */
void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
