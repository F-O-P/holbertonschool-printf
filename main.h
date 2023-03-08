#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct dog - dogs info
 * @name: get dog name
 * @age: get dogs age
 * @owner: get dogs owner name
 *
 * Description: get all dogs information
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert_t;

/* main functions */

int parser(const char *format, conver_t f_list[], va list arg_list);
int _printf(const char *format, ...);
int _putchar(char c);
int _write_char(char);
int print_char(va_list);
int print_sting(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int print_rot13(va_list);
int unsigned_integer(va_list);
int print_hex(va_list);
int print_octal(va_list);
int print_heX(va_list);

#endif
