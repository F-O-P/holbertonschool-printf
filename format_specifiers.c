#include "main.h"

/**
 * print_char - print character
 * @va_list: fill
 *
 * Return: Always 0
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - print string
 * @va_list: fill
 *
 * Return: Always 0
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list , char *);
	if (str == NULL)
		
		str = "(null)";
	for (i=	0; str[i] != '\0'; i++)
		
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - print percent
 * @va_list: fill
 *
 * Return: Always 0
 */

int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}

/**
 *
 *
 *
 *
 */


/**
 * 
 * 
 *
 * 
 */

