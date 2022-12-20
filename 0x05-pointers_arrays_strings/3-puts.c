#include "mill.h"

/**
 *
 *
 */

void _put(char *str)
{
	int i = 0;

	while(str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
