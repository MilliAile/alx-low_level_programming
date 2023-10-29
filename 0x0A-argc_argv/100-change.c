#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: the number of command line arguement must be 2
 * @argv: an array containing the commandline arguement
 * Return: 0 if condition is success, 1 if error
 */
int main(int argc, char *argv[])
{
	int n;
	int c;

	if (argc == 2)
	{
		if (isdigit(*argv[1]) && atoi(argv[1]) > 0)
		{
			c = atoi(argv[1]);
			if (c >= 25)
			{
				n = c / 25 + c % 25 / 10 + ((c % 25) % 10) / 5 + (((c % 25) % 10) % 5) / 2 + (((c % 25) % 10) % 5) % 2;
				printf("%d\n", n);
			}
			else if (c >= 10)
			{
				n = c / 10 + (c % 10) / 5 + ((c % 10) % 5) / 2 + ((c % 10) % 5) % 2;
				printf("%d\n", n);
			}
			else if (c >= 5)
			{
				n = c / 5 + (c % 5) / 2 + (c % 5) % 2;
				printf("%d\n", n);
			}
			else if (c >= 2)
			{n = c / 2 + (c % 2) / 1;
				printf("%d\n", n);
			}
			else
			{printf("%d\n", 1);
			}
		}
		else
		{printf("%d\n", 0);
		}
	}
	else
	{printf("Error\n");
		return (1);
	}
	return (0);
}
