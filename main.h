#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct convert- defins a structure for symbols and functions
 *
 * @sym: the operator
 * @f: The function associated
 */

typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} convert_t;

/* main functions */

int parser(const char *format, convert_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int unsigned_integer(va_list);

#endif
