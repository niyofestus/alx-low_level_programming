#include "stdio.h"

/**
 * print_alphabet_x1 - func
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
int b = 0;
while (b < 10)
{
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
b++;
}
}
