#include "milla.h"
/**
 * _strcat - concatinate the string
 * @dest: string to be concatinated upon
 * @src: the string to be appended
 * Return: string @dest
 */
char *_strcat(char *dest, char *src)
{
	int m = 0;
	int n;

	while (dest[m != '\0'])
	{
		m++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
