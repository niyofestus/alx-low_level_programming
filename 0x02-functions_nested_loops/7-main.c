#include "stdio.h"
int main(void)
{
	int r;

	print_last_digit(98);
	print_sign(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}
