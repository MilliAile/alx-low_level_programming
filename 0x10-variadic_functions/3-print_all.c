#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - print all type
 * @format: the format of the args is given
 */
void print_all(const char * const format, ...)
{
	int length, a, i;
	char c;
	double f;
	char *string;
	va_list type;

	va_start(type, format);
	length = strlen(format);
	for (i = 0; i < length; i++)
	{
		if (format[i] == 'i')
		{
			a = va_arg(type, int);
			printf("%d", a);
		}
		else if (format[i] == 'c')
		{
			c = va_arg(type, int);
			printf("%c", c);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(type, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			string = va_arg(type, char*);
			printf("%s", string);
		}
		else
		{
			continue;
		}
		if (i < (length - 1))
			printf(", ");

	}
	printf("\n");
	va_end(type);
}
