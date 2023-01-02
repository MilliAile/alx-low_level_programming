#include "milla.h"
/**
 * _strncat - joins two string
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int b;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[m] = src[b];
		m++;
		b++;
	}
	dest[m] = '\0';
	return (dest);
}

