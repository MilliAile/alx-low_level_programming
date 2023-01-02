#include"milla.h"
/**
 * _strcat - concatinate the string
 * @dest: string to be concatinated upon
 * @src: the string to be appended
 * Return: string @dest
 */
char *_strcat(char *dest, char *src)
{
	int m = 0, n = 0;

	while (dest[m++])
		n++;
	for (m = 0; src[m]; m++)
		dest[n++] = src[m];
	return (dest);
}
