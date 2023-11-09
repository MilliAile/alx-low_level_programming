#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - function that returns strings with separator
 * @separator: string to separate parameter strings
 * @n: the expected number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list st;

	va_start(st, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(st, char*);
		if (string == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(st);
	printf("\n");
}
