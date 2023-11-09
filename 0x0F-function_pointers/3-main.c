#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: the number of commandline arguement
 * @argv: the content of commant line arguement contained in an array
 * Return: 0 on success, and 98, 99 or 100 on error
 */
int main(int __attribute__((__unused__))argc,char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[2]);
	op = argv[3];
	num2 = atoi(argv[4]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 ==  0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
