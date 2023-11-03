#include "main.h"
int main(void)
{
	/*_puts_recursion("puts with recursion");*/
	/*_print_rev_recursion("\ncolton Walker");*/
/*	int n;

	n = _strlen_recursion("corbin coleman");
	printf("%d\n", n);
	*/
/*	int r;

	r= factorial(1);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	r= factorial(0);
	printf("%d\n", r);*/
	int r;
	r= _pow_recursion(1, 10);
	printf("%d\n", r );
	r = _pow_recursion(1024, 0);
	printf("%d\n", r);
	r = _pow_recursion(5, 2);
	printf("%d\n", r);
	r = _pow_recursion(5 , -2);
	printf("%d\n", r);
	r = _pow_recursion(-5, 3);
	printf("%d\n", r);
	return (0);
}
