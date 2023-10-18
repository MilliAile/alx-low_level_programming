#include <stdio.h>
/**
 * swap_int - Entry point
 * @a: value of new a
 * @b: value of new b
 */
void swap_int(int *a, int *b)
{
	int m = *b;
	*b = *a;
	*a = m;
}
