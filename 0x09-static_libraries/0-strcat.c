#include "main.h"
#include <string.h>
/**
 * _strcat - function to concatinate strings
 * @dest: string to be concatinated
 * @src: string to be concatinatecd
 * Return: dest the first string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
