#include "function_pointers.h"
/**
 * print_name - function to print names
 * @name: the name
 * @f: the function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
