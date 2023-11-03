#include "main.h"
#include <stdio.h>
int main(void)
{
	/*char s1[98]; = "Hello ";*/
	/*char s2[] = "world!\n";*/
	/*char *ptr;
	int i;*/
	/*printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);*/
	/*for (i = 0; i < 98 -1; i++)
	{
		s1[i]='*';
	}
	s1[i]='\0';
	printf("%s\n", s1);
	ptr = _strncpy(s1, "first, solve", 5);
	printf("%s\n", s1);
	printf("%s", ptr);*/
	/*
	char s1[] = "Hello";
	char s2[] = "world!";
	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
*/
	/*int a[] = {0, 1, 2, 4, 5, 6, 7};
	reverse_array(a, sizeof(a)/sizeof(int));*/

	char str[] = "Look up!\n";
	char *ptr;
	ptr=string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
