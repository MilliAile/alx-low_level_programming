#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers separated by a separator
 * @separator: the string to be a separator
 * @n: the number of parameters to be expected
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator == NULL)
		{
			continue;
		}
		else if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
