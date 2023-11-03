#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatinate n number of elements from src to dest
 * @dest: string to be concatinated upon
 * @src: string to be concatinated on string dest
 * @n: the number of element of src that are going to be concatinated
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
