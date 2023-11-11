#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - print all type
 * @format: the format of the args is given
 */
void print_all(const char * const format, ...)
{ unsigned int i = 0;
	int comma = 0;
	char *string;
	va_list type;

	va_start(type, format);
	while (format == NULL)
		return;
	while (format[i] != '\0')
	{
		switch (format[i])
		{ case 'i':
				printf("%d", va_arg(type, int));
				comma++;
				break;
			case 'c':
				printf("%c", va_arg(type, int));
				comma++;
				break;
			case 'f':
				printf("%f", va_arg(type, double));
				comma++;
				break;
			case 's':
				string = va_arg(type, char*);
				if (string == NULL)
				{ printf("(nil)");
					comma++;
					break;
				} printf("%s", string);
				comma++;
				break;
			default:
				comma--;
				break;
		}
		if (i < (strlen(format) - 1) && comma > 0)
			printf(", ");
		i++;
	} printf("\n");
	va_end(type);
}
