#include "milla.h"
/**
 * _strncpy - copy string
 * @dest: copy to
 * @src: copy from
 * @n: number of char
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[m] =  src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
