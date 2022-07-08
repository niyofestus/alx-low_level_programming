#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

/**
* struct pairing - struct for pairing format to fuctions
*
* @a: the operator
* @ptr: the fuction associated
*/
typedef struct pairing
{
	char a;
	int (*ptr)();
} pair;

int print_p(void);
int _printf(const char *format, ...);
int print_c(va_list arg);
int print_s(va_list arg);
int printy(const char *format, va_list arg);

#endif
