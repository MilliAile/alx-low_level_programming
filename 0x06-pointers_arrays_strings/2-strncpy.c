#include "main.h"
#include <string.h>
/**
 * _strncpy - function to copy n element of string
 * @dest: string to be copied upon
 * @src: string to be copied
 * @n: number of elements
 * Return: dest - new value
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
